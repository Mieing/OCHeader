@class NSString, NSFileHandle;

@interface WPCoreBaseFile : NSObject {
    NSFileHandle *m_fhFile;
    NSString *m_nsFilePath;
    unsigned int m_uiMode;
    BOOL m_bOpen;
}

+ (BOOL)FileExist:(id)a0;
+ (long long)GetFileSize:(id)a0;
+ (id)LoadDataFromPathEx:(id)a0 Offset:(unsigned long long)a1 MaxLen:(unsigned long long)a2;
+ (BOOL)CreatePath:(id)a0;
+ (BOOL)CreateFile:(id)a0;
+ (void)EnsureCreateParentDir:(id)a0;
+ (BOOL)RenameFile:(id)a0 To:(id)a1;
+ (BOOL)CopyFile:(id)a0 To:(id)a1;
+ (BOOL)RemoveFile:(id)a0;
+ (BOOL)AppendData:(id)a0 toPath:(id)a1;

- (void)Close;
- (BOOL)ReadData:(id)a0 Len:(unsigned long long)a1;
- (BOOL)SetFileInfo:(id)a0 Mode:(unsigned int)a1;
- (BOOL)IsOpen;
- (BOOL)Seek:(long long)a0;
- (BOOL)Open;
- (unsigned long long)SeekToEndOfFile;
- (BOOL)WriteData:(id)a0;
- (BOOL)WriteLargeData:(id)a0;
- (void).cxx_destruct;

@end
