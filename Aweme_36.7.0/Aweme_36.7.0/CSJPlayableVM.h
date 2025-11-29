@class NSString;

@interface CSJPlayableVM : CSJRewardFullScreenBaseVM <CSJPurePlayableLoadingViewControllerDelegate, CSJRewardedVideoWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initViewModelWithMeta:(id)a0 rootViewController:(id)a1 slot:(id)a2;
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
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:(id)a0;
- (void)startTimer;

@end
