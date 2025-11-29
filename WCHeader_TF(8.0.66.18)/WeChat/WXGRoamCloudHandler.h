@class NSString, CKContainer, CKDatabase;
@protocol WXGRoamCloudHandlerDelegate;

@interface WXGRoamCloudHandler : NSObject {
    CKContainer *_container;
    CKDatabase *_database;
}

@property (weak, nonatomic) id<WXGRoamCloudHandlerDelegate> delegate;
@property (copy, nonatomic) NSString *ilinkUserId;

- (id)init;
- (void)cloudGetFileInfo:(unsigned long long)a0 remotePath:(id)a1;
- (void)cloudGetFileList:(unsigned long long)a0 parentPath:(id)a1 recursive:(BOOL)a2;
- (void)cloudUploadFile:(unsigned long long)a0 remotePath:(id)a1 localPath:(id)a2;
- (void)cloudDownloadFile:(unsigned long long)a0 remotePath:(id)a1 localPath:(id)a2;
- (void)cloudDeleteFile:(unsigned long long)a0 remotePath:(id)a1;
- (void)cloudDeleteFileList:(unsigned long long)a0 remotePathList:(id)a1;
- (void)getFileListInnerZone:(unsigned long long)a0 pathInfo:(id)a1 cursor:(id)a2 results:(id)a3 parentPath:(id)a4;
- (void)getFileListInnerRecord:(unsigned long long)a0 pathInfo:(id)a1 cursor:(id)a2 results:(id)a3 parentPath:(id)a4;
- (void)uploadFileInner:(unsigned long long)a0 localPath:(id)a1 pathInfo:(id)a2 zoneID:(id)a3;
- (void)saveRecordInner:(id)a0 invokeID:(unsigned long long)a1 localPath:(id)a2;
- (id)mergePath:(id)a0 withFileName:(id)a1;
- (id)handlerRemotePath:(id)a0;
- (void).cxx_destruct;

@end
