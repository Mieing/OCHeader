@class NSString, VideoUploadTaskController, NSMutableArray;
@protocol UploadVideoCDNMgrDelegate;

@interface VideoUploadUnifyMgr : NSObject <VideoUploadTaskControllerDelegate, IMsgExt>

@property (retain, nonatomic) VideoUploadTaskController *currentSendingTask;
@property (retain, nonatomic) VideoUploadTaskController *currentUploadingTask;
@property (retain, nonatomic) NSMutableArray *arrSendingTask;
@property (retain, nonatomic) NSMutableArray *arrUploadingTask;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (weak, nonatomic) id<UploadVideoCDNMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getExistTaskDescript;
- (id)getTaskWithMsgWrap:(id)a0;
- (BOOL)IsMsgInUploadQueue:(id)a0;
- (void)StartUpload:(id)a0;
- (void)StopUpload:(id)a0 fromDelete:(BOOL)a1;
- (void)PauseUpload:(id)a0;
- (BOOL)stopTaskWithMsgWrap:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (void)Stop;
- (void)checkQueue;
- (void)checkSendingQueue;
- (void)checkUploadingQueue;
- (void)onUploadTaskSuccess:(id)a0;
- (void)onUploadTaskFail:(id)a0 errorType:(int)a1;
- (void)onSendOccupyMsgSucc:(id)a0;
- (void)onSendOccupyMsgFail:(id)a0 errorType:(int)a1;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
