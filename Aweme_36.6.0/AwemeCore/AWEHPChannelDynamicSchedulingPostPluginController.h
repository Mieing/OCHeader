@class NSString;

@interface AWEHPChannelDynamicSchedulingPostPluginController : NSObject <AWEHPChannelPluginControllerProtocol>

@property (nonatomic) BOOL isFirstFrameReady;
@property (nonatomic) long long tabChangeSessionID;
@property (nonatomic) double channelStayForTriggerTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotification;
- (void)channelViewDidLoad:(id)a0;
- (void)channelViewDidResume:(id)a0;
- (void)channelViewDidAppear:(id)a0;
- (void)channel:(id)a0 endLandingTabWithModel:(id)a1;
- (void)channel:(id)a0 enterWithModel:(id)a1;
- (void)channel:(id)a0 leaveWithModel:(id)a1;
- (void)channelScrollViewDidFinishSliding:(id)a0;
- (void)addMemoryObserver;
- (void)handleFeedBigMemoryUse;
- (void)p_performSelectorTriggerFailStrategy:(id)a0;
- (void)p_triggerFailStrategy:(id)a0;
- (id)init;
- (void)setup;

@end
