diff --git a/tsk/fs/ntfs.c b/tsk/fs/ntfs.c
index 93549b77..6b3f8c1f 100755
--- a/tsk/fs/ntfs.c
+++ b/tsk/fs/ntfs.c
@@ -1816,12 +1816,14 @@ ntfs_proc_attrseq(NTFS_INFO * ntfs,
                 *name8 = '\0';
 
             /* Clean up name */
+            /* Do not replace control characters in attribute name
             i = 0;
             while (name[i] != '\0') {
                 if (TSK_IS_CNTRL(name[i]))
                     name[i] = '^';
                 i++;
             }
+            */
         }
         else {
             name[0] = '\0';
