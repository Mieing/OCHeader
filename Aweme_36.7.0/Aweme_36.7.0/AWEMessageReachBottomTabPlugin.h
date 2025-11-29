@class NSString, NSMutableDictionary;

@interface AWEMessageReachBottomTabPlugin : NSObject <AWEMessageReachBottomTabPluginProtocol, AWEHPChannelPluginControllerProtocol>

@property (nonatomic) BOOL itemDidAppear;
@property (nonatomic) BOOL bottomTabDidHidden;
@property (nonatomic) BOOL sideBarDidOpen;
@property (retain, nonatomic) NSMutableDictionary *blockDict;
@property (retain, nonatomic) NSMutableDictionary *optBlockDict;
@property (retain, nonatomic) NSMutableDictionary *lastVisibilityResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharePlugin;

- (void)bottomChannelDidLoad:(id)a0;
- (void)bottomChannelViewDidAppear:(id)a0;
- (void)bottomChannelViewDidDisappear:(id)a0;
- (void)bottomChannel:(id)a0 tabBarDidSetHidden:(BOOL)a1;
- (void)channelViewDidAppear:(id)a0;
- (void)channelViewDidDisappear:(id)a0;
- (void)addTabVisibilityChanged:(id /* block */)a0 channelId:(id)a1;
- (void)addFrameTabVisibilityChangedCallBackWithChannelID:(id)a0;
- (id)itemTypeWithChannelId:(id)a0;
- (BOOL)isChannelLoad:(id)a0;
- (BOOL)canShowBadge:(id)a0;
- (BOOL)canShowBubble:(id)a0;
- (BOOL)bottomTabVisible;
- (BOOL)needUpdateWithCurrentResult:(id)a0 channelId:(id)a1;
- (void)updateTabVisibilityStatus;
- (void)handleSideBarDidOpen;
- (void)handleSideBarDidClose;
- (void)removeTabVisibilityCallBackWithChanelId:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)addObserver;
- (void)dealloc;
- (void)removeObserver;

@end
