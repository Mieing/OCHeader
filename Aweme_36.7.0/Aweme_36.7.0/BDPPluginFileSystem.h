@class NSString, BDPIOOperationQueue;

@interface BDPPluginFileSystem : BDPBridgeInstancePlugin <SSZipArchiveDelegate>

@property (retain, nonatomic) BDPIOOperationQueue *ioQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)checkRequiredParam:(id)a0 paramName:(id)a1;
- (void)copyFileSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (unsigned long long)getFileSizeForPath:(id)a0;
- (void)mkdirSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)renameSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)rmdirSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)readdirSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)readFileSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)unlinkSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveFileSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)statSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)p_getStatWithFullPath:(id)a0 isInTempFolder:(BOOL)a1;
- (id)p_getAllStatsOfFullPath:(id)a0 isInTempFolder:(BOOL)a1 relativePath:(id)a2;
- (void)writeFileSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)p_encodeData:(id)a0 encodeTypeStr:(id)a1;
- (void)appendFileSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)truncateSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)base64ToTempFilePathSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)accessWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)copyFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getFileInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSavedFileListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)mkdirWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeSavedFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)renameWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)rmdirWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)readdirWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)readFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)unlinkWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)statWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)unzipWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)writeFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)appendFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)truncateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)protocolPathAddFileInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)base64ToTempFilePathWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLocalImgDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getRealPathWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)zipArchiveShouldUnzipFileAtIndex:(long long)a0 totalFiles:(long long)a1 archivePath:(id)a2 fileInfo:(struct unz_file_info_s { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned int x13; unsigned long long x14; })a3;
- (void).cxx_destruct;

@end
