@interface WXGRoamCustomDiskPortableLogic : WXGRoamCustomDiskBaseLogic

- (void)getRoamDiskInfoInner:(unsigned long long)a0;
- (void)getFileInfoListInner:(unsigned long long)a0 parentPath:(id)a1 recursiveDepth:(int)a2;
- (void)getFileInfoInner:(unsigned long long)a0 filePath:(id)a1;
- (void)deleteFileInner:(unsigned long long)a0 filePath:(id)a1;
- (void)deleteFileListInner:(unsigned long long)a0 filePathList:(id)a1;
- (void)createDirInner:(unsigned long long)a0 dirPath:(id)a1;
- (void)getDirsSizeAsync:(unsigned long long)a0 dirPaths:(id)a1;
- (void)deleteDirInner:(unsigned long long)a0 dirPath:(id)a1;
- (void)uploadFileInner:(unsigned long long)a0 processId:(long long)a1 localPath:(id)a2 remotePath:(id)a3;
- (void)downloadFileInner:(unsigned long long)a0 processId:(long long)a1 remotePath:(id)a2 localPath:(id)a3;
- (void)uploadFileInner:(unsigned long long)a0 processId:(long long)a1 localPath:(id)a2 remotePath:(id)a3 recursiveDepth:(int)a4;
- (void)downloadFileInner:(unsigned long long)a0 processId:(long long)a1 remotePath:(id)a2 localPath:(id)a3 recursiveDepth:(int)a4;
- (unsigned long long)getFolderSize:(id)a0;
- (BOOL)getFileInfoListWithParentPath:(id)a0 recursiveDepth:(int)a1 fileInfoList:(id)a2;

@end
