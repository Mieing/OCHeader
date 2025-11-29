@class NSString, AWEEntertainmenPlayletVIPMaskPresenter, AWEEntertainmenRewardMaskPresenter;
@protocol AWEEntertainmentMaskDelegate;

@interface AWEEntertainmenMultipleEventsMaskPresenter : AWEEntertainmentBaseMaskPresenter <AWEEntertainmenMaskPresenterProtocol>

@property (retain, nonatomic) AWEEntertainmenRewardMaskPresenter *rewardMaskPresenter;
@property (retain, nonatomic) AWEEntertainmenPlayletVIPMaskPresenter *playletVIPMaskPresenter;
@property (weak, nonatomic) id<AWEEntertainmentMaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 context:(id)a1;
- (BOOL)isPreviewVideo;
- (BOOL)shouldShowBlockView;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (void).cxx_destruct;
- (void)reset;

@end
