@class NSString, NSMutableArray;
@protocol AWEHPChannelControllerProtocol, AWEMessageReachTabVisibilityChangedResult;

@interface AWEMessageReachSideBarPlugin : NSObject <AWEHPChannelPluginControllerProtocol, AWEMessageReachSideBarPluginProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) BOOL topTabDidAppear;
@property (nonatomic) BOOL topTabHidden;
@property (retain, nonatomic) id<AWEMessageReachTabVisibilityChangedResult> lastVisibilityResult;
@property (retain, nonatomic) NSMutableArray *blockArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharePlugin;

- (void)channelTopTabContainerDidAppear:(id)a0;
- (void)channelTopTabContainerDidDisappear:(id)a0;
- (void)channel:(id)a0 topSegmentControllHidden:(BOOL)a1;
- (BOOL)canShowBubble;
- (BOOL)needUpdateWithCurrentResult:(id)a0;
- (BOOL)isSideBarEntranceVisible;
- (void)updateSideBarEntranceVisibilityStatus;
- (void)addSideBarEntranceVisibilityChanged:(id /* block */)a0;
- (void)removeSideBarEntranceVisibilityCallBack;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)addObserver;
- (void)dealloc;
- (void)removeObserver;

@end
