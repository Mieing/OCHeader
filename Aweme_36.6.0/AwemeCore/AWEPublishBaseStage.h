@class NSString, NSError;
@protocol AWEPublishTaskContextProtocol, AWEPublishStageDelegate;

@interface AWEPublishBaseStage : AWEPublishRunnableStage <AWEInternalPublishStageProtocol, AWEPublishStageProtocol> {
    NSError *_error;
}

@property (weak, nonatomic) id<AWEPublishTaskContextProtocol> task;
@property (weak, nonatomic) id<AWEPublishStageDelegate> delegate;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic) BOOL cloesClientWatermark;
@property (nonatomic) long long stageIndex;
@property (nonatomic) BOOL isLivePhotoFirstFrame;
@property (nonatomic) BOOL enableResumePublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long status;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *stageType;

+ (id)mapError:(long long)a0;
+ (void)acc_hook;
+ (void)_aweLazyRegisterLoad_ACCHook;

- (void)bindToTask:(id)a0;
- (BOOL)pendingForError:(id)a0;
- (id)acc_init;
- (void)acc_run;
- (void)acc_bindToTask:(id)a0;
- (void)acc_onListenTaskCancel:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)init;
- (void)setError:(id)a0;
- (void)run;
- (void)dealloc;
- (BOOL)isCancelledError:(id)a0;

@end
