@interface IESLiveOpenPlatformShareScreenVideoSingleStrategy : IESLiveOpenPlatformShareScreenBaseStrategy

- (void)didSetAttachingDIContext;
- (BOOL)shouldHideEndButton;
- (void)setCastScreenView:(id)a0;
- (long long)castScreenStrategy;
- (void)updateAnchorPreviewLayout;
- (void)changeScreenCastUIStatusWhenReturnButtonClicked;
- (void)forceStopCastScreenWithRunnerResponse:(id)a0 continueBlock:(id /* block */)a1;
- (id)anchorCameraPreviewRatioTuple;
- (id)interactCameraPreview;
- (struct CGSize { double x0; double x1; })screenCastSize;
- (BOOL)shouldShowSmallWindowView;
- (struct CGPoint { double x0; double x1; })customInitializePosition;
- (BOOL)shouldUseCustomCastScreen;
- (BOOL)shouldDisableInteractionItem;
- (BOOL)shouldHideBackgroundToast;
- (void)anchorScreenStatusChange:(long long)a0;
- (id)initWithAppId:(id)a0 strategy:(unsigned long long)a1 containerType:(long long)a2 model:(id)a3 diContext:(id)a4;
- (void)clickStartShareScreenWithCallback:(id /* block */)a0;
- (void)clickStopShareScreenWithCallback:(id /* block */)a0;
- (void)stopShareScreenWhenQuitWithCallback:(id /* block */)a0;
- (long long)businessType;

@end
