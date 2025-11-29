@class NSString;

@interface CSJExpressPlayableViewModel : CSJExpressRewardFullScreenVM <CSJPurePlayableLoadingViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)getMuteType;
- (id)initViewModelWithExpressAdView:(id)a0 nativeAd:(id)a1 rootViewController:(id)a2;
- (void)bu_willEnterForegroundNotification:(id)a0;
- (void)bu_didEnterBackgroundNotification:(id)a0;
- (void)vmLoadData;
- (void)updateLeftSeconds:(id)a0;
- (void)leftLblControl:(BOOL)a0;
- (void)closeBtnControl:(BOOL)a0;
- (void)rewardReport;
- (void)handlePurePlayablePlayFinish;
- (void)clickButtonTapFromPlayableLoading;
- (void)purePlayableRemoveLoadingByTimeout;
- (void)purePlayableVolumeChange:(id)a0 isMute:(BOOL)a1;
- (BOOL)isPlayableRenderFailed;
- (void)appStoreDidAppear;
- (void)appStoreDidDisappear;
- (void)addNotification;
- (void)startTimer;

@end
