@class NSString;

@interface AWELiveFeedModuleServiceImpl : NSObject <IESLiveAWEFeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)liveClosePageCanLandingTabLiveItem;
- (BOOL)liveRoomCanLandingTabLiveItem;
- (void)liveRoomSwitchTabLiveItem:(id)a0 enterMethod:(id)a1;
- (void)liveRoomSwitchTabLiveItem:(id)a0 enterMethod:(id)a1 params:(id)a2;
- (BOOL)isCurrentInLiveTab;
- (void)liveClosePageSwitchTabLiveItem:(id)a0 enterMethod:(id)a1;
- (void)liveClosePageSwitchTabLiveItem:(id)a0 enterMethod:(id)a1 params:(id)a2;
- (id)currentHomepageTabID;
- (void)switchToSourceTab:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)canLandingTabLiveItem:(id)a0;
- (void)switchTabLiveItem:(id)a0;
- (void)liveInnerFeed:(id)a0 willPopToVC:(id)a1;

@end
