@interface AWEEntertainmenPlayletVIPMaskPresenter : AWEEntertainmentBaseMaskPresenter

@property (nonatomic) BOOL hasReportTryEnd;
@property (nonatomic) BOOL didAppearNeedReport;

- (id)trackParams;
- (BOOL)isPreviewVideo;
- (BOOL)shouldShowBlockView;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (id)playletVIPPaidPanelExtraParams;
- (void)viewDidAppear;
- (void)reset;

@end
