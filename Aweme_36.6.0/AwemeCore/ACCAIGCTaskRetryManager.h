@class NSString, ACCAIGCTaskRetryInfoModel;
@protocol ACCDUXLoadingInstance, ACCAIGCTaskRetryEventDelegate;

@interface ACCAIGCTaskRetryManager : NSObject <AWEAIGCTaskRetryManagerProtocol>

@property (weak, nonatomic) id<ACCAIGCTaskRetryEventDelegate> delegate;
@property (retain, nonatomic) ACCAIGCTaskRetryInfoModel *currentRetryInfo;
@property (retain, nonatomic) id<ACCDUXLoadingInstance> loadingInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showRetryableContentUnavailableToastWithInfo:(id)a0;
+ (void)enterFailRetryContextIfNeededForScene:(unsigned long long)a0 data:(id)a1;
+ (void)monitorEnterRetryContextWithRetryInfo:(id)a0;
+ (Class)resolveRetryTaskHandlerWithType:(unsigned long long)a0;
+ (void)resolveRetryTaskTypeWithTaskRetryInfo:(id)a0 completion:(id /* block */)a1;
+ (void)monitorStartRetryWithRetryInfo:(id)a0;
+ (void)addSnapShotOnWindowWithAutoDismissTime:(double)a0;
+ (id)sharedManager;

- (BOOL)shouldDowngradeToSimpleRetryWithPublishViewModel:(id)a0 retryInfo:(id)a1;
- (BOOL)startRetryWithPublishViewModel:(id)a0 fromFailContext:(id)a1;
- (void)handleRetryHasStartedWithNewTaskID:(id)a0 publishViewModel:(id)a1;
- (void)newTaskWillEnterLoadingView;
- (id)enterFromWithEntranceType:(unsigned long long)a0;
- (id)enterFromWithRetryPublishViewModel:(id)a0;
- (void)hideRetryPrepareLoadingView;
- (void)showRetryPrepareLoadingView;
- (id)expireToastEnterFromWithEntranceType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
