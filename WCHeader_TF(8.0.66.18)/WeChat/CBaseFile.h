@class NSString, NSFileHandle;

@interface CBaseFile : NSObject {
    unsigned int m_uiMode;
    BOOL m_bOpen;
}

@property (retain, nonatomic) NSString *m_nsFilePath;
@property (retain, nonatomic) NSFileHandle *m_fhFile;

+ (void)initialize;
+ (int)BlockSizeForIO;
+ (BOOL)CreateFile:(id)a0;
+ (BOOL)CreatePath:(id)a0;
+ (void)EnsureCreateParentDir:(id)a0;
+ (BOOL)RenameFile:(id)a0 To:(id)a1;
+ (BOOL)SwapFile:(id)a0 withFile:(id)a1;
+ (BOOL)SafeRenameFiles:(id)a0;
+ (BOOL)SafeRenameFiles:(id)a0 error:(id *)a1;
+ (BOOL)CopyFile:(id)a0 To:(id)a1;
+ (BOOL)FileIsHardLink:(id)a0;
+ (long long)GetFileDiskSpace:(id)a0;
+ (BOOL)File:(id)a0 inodeSameWith:(id)a1;
+ (BOOL)HardLinkFile:(id)a0 To:(id)a1;
+ (BOOL)FileExist:(id)a0;
+ (long long)GetFileModifyTime:(id)a0;
+ (long long)GetFileLastTimeOfAccessModifyChangeBirth:(id)a0;
+ (long long)GetFileSize:(id)a0;
+ (long long)GetFileRealSize:(id)a0;
+ (long long)FolderSizeAtPath:(const char *)a0;
+ (id)SubFoldersName:(id)a0;
+ (id)SubFilesRecursively:(id)a0;
+ (id)SubFilesName:(id)a0;
+ (BOOL)LoadSubFolders:(id)a0 SubFiles:(id)a1 fromFolderPath:(id)a2;
+ (BOOL)RemoveFile:(id)a0;
+ (void)ClearPath:(id)a0;
+ (void)SyncClearPath:(id)a0;
+ (void)ClearPath:(id)a0 WithOut:(id)a1;
+ (BOOL)CreateSymbolLink:(id)a0 LinkName:(id)a1;
+ (id)LoadDataFromPath:(id)a0 Offset:(unsigned long long)a1 Len:(unsigned int)a2;
+ (id)LoadDataFromPathEx:(id)a0 Offset:(unsigned long long)a1 MaxLen:(unsigned int)a2;
+ (BOOL)WriteDataToPath:(id)a0 Offset:(unsigned long long)a1 Data:(id)a2;
+ (BOOL)AppendData:(id)a0 toPath:(id)a1;
+ (BOOL)OverWriteDataToPath:(id)a0 Data:(id)a1;
+ (BOOL)SysOverWriteDataToPath:(id)a0 Data:(id)a1;
+ (BOOL)SysAppendData:(id)a0 toPath:(id)a1;
+ (id)GetFileCreateTime:(id)a0;
+ (BOOL)IsFile:(id)a0 newerThanFile:(id)a1;
+ (id)GetFileMD5:(id)a0;
+ (id)GetDataMD5:(id)a0;
+ (id)GetFileSHA1:(id)a0;
+ (id)GetDataSHA1:(id)a0;
+ (id)GetFileSHA256:(id)a0;
+ (id)GetDataSHA256:(id)a0;
+ (BOOL)tryResetFileProtection:(id)a0;
+ (BOOL)tryRemoveFileProtection:(id)a0;
+ (void)tryRemoveDirectoryProtection:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)SetFileInfo:(id)a0 Mode:(unsigned int)a1;
- (BOOL)IsOpen;
- (BOOL)Open;
- (BOOL)OpenWithFd:(int)a0;
- (void)Close;
- (BOOL)SetFileSize:(long long)a0;
- (BOOL)Seek:(long long)a0;
- (unsigned long long)SeekToEndOfFile;
- (BOOL)ReadData:(id *)a0 Len:(unsigned int)a1;
- (BOOL)WriteData:(id)a0;
- (BOOL)WriteLargeData:(id)a0;
- (void).cxx_destruct;

@end
