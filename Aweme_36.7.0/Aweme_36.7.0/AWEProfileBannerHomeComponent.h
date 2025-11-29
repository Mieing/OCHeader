@class NSString;

@interface AWEProfileBannerHomeComponent : AWEProfileBannerBaseComponent <AWEUserHomeControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onRefreshUserDataUseCache:(BOOL)a0;
- (void)onResetUI;
- (void)contrailWillEnterFullScreen;
- (void)contrailEnterFullScreenWithFullScreenTopOffsetY:(double)a0 animation:(id /* block */)a1;
- (void)contrailDidFinishedEnterFullScreenWithAnimationSucceed:(BOOL)a0;
- (void)contrailWillLeaveFullScreenWithShowTabBar:(BOOL)a0;
- (void)contrailLeaveFullScreen;
- (void)contrailDidFinishedLeaveFullScreen;
- (void)viewWillAppear;
- (void)viewWillLayoutSubviews;

@end
