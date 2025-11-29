@class NSRecursiveLock, NSString, ImageUploadTaskController, NSMutableArray;

@interface ImageUploadUnifyMgr : ImageUploadUnifyBaseMgr <ImageUploadTaskControllerDelegate, IMsgExt, MMKernelExt>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) ImageUploadTaskController *currentTask;
@property (retain, nonatomic) NSMutableArray *arrTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)StartUploadImage:(id)a0;
- (void)CheckQueue;
- (void)Stop;
- (void)StopUploadImage:(id)a0;
- (void)StopUploadImageByUsrName:(id)a0;
- (BOOL)IsUploading:(id)a0;
- (unsigned int)GetUploadPercent:(id)a0;
- (id)getTaskWithMsgWrap:(id)a0;
- (id)getExistTaskDescript;
- (void)onUploadTaskSuccess:(id)a0;
- (void)onUploadTaskFail:(id)a0 errorType:(int)a1;
- (void)onUploadTask:(id)a0 modifyMessageWithBitSet:(unsigned int)a1;
- (void)onUploadTaskModMsg:(id)a0;
- (void)onUploadTaskInvalid:(id)a0;
- (void)onAuthOK;
- (void).cxx_destruct;

@end
