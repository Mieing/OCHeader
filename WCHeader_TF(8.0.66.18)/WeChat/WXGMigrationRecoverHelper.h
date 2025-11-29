@class WXGChatLogRecoverFilter, WXGMigrationMsgItemDB, NSObject;
@protocol OS_dispatch_queue, WXGMigrationRecoverHelperDelegate;

@interface WXGMigrationRecoverHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileSerialQueue;
@property (retain, nonatomic) WXGChatLogRecoverFilter *recoverFilter;
@property (retain, nonatomic) WXGMigrationMsgItemDB *msgItemDB;
@property (nonatomic) unsigned long long totalBackupTextSize;
@property (nonatomic) unsigned long long totalBackupMediaSize;
@property (weak, nonatomic) id<WXGMigrationRecoverHelperDelegate> delegate;

- (id)initWithEncryptKey:(id)a0;
- (void)dealloc;
- (void)checkDataIntegrity;
- (unsigned long long)getTotalRecoverTextSize;
- (unsigned long long)getTotalRecoverMediaSize;
- (void)asynProcessPieceOfData:(id)a0;
- (void)oldAsyncProcessPieceOfData:(id)a0;
- (void)asynProcessMigrationDataTag:(id)a0;
- (void)asynProcessMigrationRequestSessionDataInfoArray:(id)a0 shouldCheckPersisten:(BOOL)a1;
- (BOOL)p_writeMsgListDataPush:(id)a0 toPath:(id)a1;
- (BOOL)p_writeMediaDataPush:(id)a0 toPath:(id)a1;
- (void)p_writeBufferFileToPersistentPath;
- (void).cxx_destruct;

@end
