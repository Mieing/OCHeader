@class NSString;
@protocol AWEHPChannelControllerProtocol, AWEMessageReachTabVisibilityChangedResult;

@interface AWEMessageReachTopTabPlugin : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol, AWEMessageReachTopTabPluginProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) BOOL topTabDidLayout;
@property (nonatomic) BOOL topTabDidAppear;
@property (nonatomic) BOOL topTabHidden;
@property (retain, nonatomic) id<AWEMessageReachTabVisibilityChangedResult> lastVisibilityResult;
@property (nonatomic) double badgeVisibleThreshold;
@property (nonatomic) BOOL needBackToFirstLevelPageNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ tabVisibilityChanged;

+ (BOOL)allowInjectToChannel:(id)a0;

- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (void)channelTopTabDidEndScroll;
- (void)channelTopSegmentControllHidden:(BOOL)a0;
- (BOOL)canShowBubble:(double)a0;
- (BOOL)needUpdateWithCurrentResult:(id)a0;
- (BOOL)isPluginOptOn;
- (void)updateTabVisibilityStatus:(id)a0;
- (void)sendTabVisibilityInfoWithResult:(id)a0;
- (double)bubbleVisibleThreshold;
- (void)updateTabVisibilityStatusIfNeedBackToFirstLevelPageNotification;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)addObserver;
- (id)initWithController:(id)a0;
- (void)dealloc;
- (void)removeObserver;
- (id)initWithChannel:(id)a0;

@end
