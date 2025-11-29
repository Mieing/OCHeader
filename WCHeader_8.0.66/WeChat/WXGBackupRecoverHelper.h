@class WXGBackupRecoverAnalyseInfo, WXGChatLogRecoverFilter, WXGBackupIndexDB, NSObject;
@protocol OS_dispatch_queue, WXGBackupRecoverHelperDelegate;

@interface WXGBackupRecoverHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileSerialQueue;
@property (retain, nonatomic) WXGBackupIndexDB *indexDB;
@property (retain, nonatomic) WXGChatLogRecoverFilter *recoverFilter;
@property (nonatomic) unsigned long long leftSpace;
@property (weak, nonatomic) id<WXGBackupRecoverHelperDelegate> delegate;
@property (retain, nonatomic) WXGBackupRecoverAnalyseInfo *analyseInfo;
@property (nonatomic) BOOL isRecover;

+ (id)backupMediaPath;
+ (id)backupMediaBufferPath;
+ (id)indexDBPath;
+ (unsigned long long)reservedBackupMediaSize;
+ (id)p_pathForDataId:(id)a0;
+ (id)p_bufferPathForDataId:(id)a0;
+ (void)deleteMsgListArray:(id)a0;
+ (void)deleteBufferMsgListArray:(id)a0;
+ (void)deleteAllMediaData;
+ (void)setBackupRecoverOnlyText:(BOOL)a0;
+ (BOOL)checkBackupRecoverOnlyText;

- (id)init;
- (id)initWithEncryptKey:(id)a0;
- (void)checkDataIntegrity;
- (void)asynProcessDataTag:(id)a0;
- (void)asynProcessFilterRequest:(id)a0;
- (void)asynProcessPieceOfData:(id)a0;
- (void)asynProcessRequestSessionDataInfoArray:(id)a0;
- (BOOL)p_writeMsgListDataPush:(id)a0 toPath:(id)a1;
- (BOOL)p_writeMediaDataPush:(id)a0 toPath:(id)a1;
- (void)p_writeBufferFileToPersistentPath;
- (void).cxx_destruct;

@end
