@interface AWEEntertainmenRewardMaskPresenter : AWEEntertainmentBaseMaskPresenter

@property (nonatomic) double clickTimeStamp;
@property (nonatomic) BOOL hasReportTryEnd;

- (id)trackParams;
- (id)initWithModel:(id)a0 context:(id)a1;
- (BOOL)isPreviewVideo;
- (BOOL)shouldShowBlockView;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (id)requestRewardedAdvertisingContainerParams;
- (void)reset;

@end
