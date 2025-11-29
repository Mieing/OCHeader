@class NSString;

@interface AWELiveInnerService : HTSService <AWELiveInnerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFeedLiveStreamViewControllerWithAvatarClick:(id /* block */)a0;
- (id)getAcquaintanceViewControllerWithAvatarClick:(id /* block */)a0;
- (id)getFeedVSLiveStreamViewControllerWithAvatarClick:(id /* block */)a0;
- (id)getFeedLiveCardViewControllerWithUserClick:(id /* block */)a0;
- (id)getFeedLegouLiveListCardViewControllerWithUserClick:(id /* block */)a0;
- (void)checkRoomAndUserStatusWithModel:(id)a0 withBlock:(id /* block */)a1;
- (long long)buildSceneBy:(id)a0 referString:(id)a1;
- (BOOL)disableFeedMixLiveRouterCheck:(id)a0;
- (BOOL)enableInstallProfileMessageChannel;
- (BOOL)openLynxURL:(id)a0 adInfo:(id)a1 queries:(id)a2 liveInfo:(id)a3;
- (void)openByteCertWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchPreStreamViewCards:(id)a0 completion:(id /* block */)a1;
- (id)liveTabSkyLightService;
- (id)liveProfileMessageService;

@end
