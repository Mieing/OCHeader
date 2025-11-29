@class AWEAIGCLegacyBusinessContext, AWEASyncQueueViewController, NSString;

@interface AWEAIGCLegacyBusinessLegacyAsyncQueue : NSObject <AWEAIGCLegacyBusinessLegacyAsyncQueueProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (retain, nonatomic) AWEASyncQueueViewController *asyncQueueVC;
@property (nonatomic) BOOL markSyncQueueOnline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAsyncQueueVCIfNeeded;
- (void)requestAsyncQueueEffectIDIfNeeded;
- (void)setupAsyncQueueWhenComponentWillAppear;
- (void)showAsyncQueueVCWhenFirstRender;
- (void)saveDraftWithData:(id)a0 withState:(long long)a1 msgToEffectStart:(double)a2;
- (void)showAsyncQueueViewWithType:(long long)a0 withWaitTime:(double)a1 waitTimeTip:(id)a2 wthTaskId:(id)a3 withfailText:(id)a4;
- (void)requestSupportASyncQueueeffectId:(id)a0;
- (void)handleAsyncQueueMessageResponse:(id)a0;
- (BOOL)isASyncQueueLimit;
- (void)handleAsyncQueueResult:(id)a0 errMsg:(id)a1;
- (BOOL)isAsyncqueue;
- (void)handleAsyncQueueGroupId:(BOOL)a0;
- (BOOL)isHasNoticeModel;
- (void)showAsyncQueueType;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)effect;
- (id)repository;

@end
