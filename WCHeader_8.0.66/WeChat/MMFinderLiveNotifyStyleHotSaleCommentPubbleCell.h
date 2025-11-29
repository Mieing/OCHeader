@class MMFinderLiveECHotSaleLikeAnimationCenter, NSString, UILabel, MMGradientView, MMFinderLiveNumberAnimationLogic;

@interface MMFinderLiveNotifyStyleHotSaleCommentPubbleCell : MMFinderLiveNotifyStyleBaseProductPubbleCell <MMFinderLiveNumberAnimationLogicObserver>

@property (retain, nonatomic) MMFinderLiveNumberAnimationLogic *animationLogic;
@property (retain, nonatomic) MMGradientView *gradientView;
@property (retain, nonatomic) UILabel *infoPrefixLabel;
@property (retain, nonatomic) UILabel *infoNumberLabel;
@property (retain, nonatomic) MMGradientView *infoBackgroundView;
@property (readonly, nonatomic) MMFinderLiveECHotSaleLikeAnimationCenter *animationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numberFont;
+ (double)preferDisplayDurationWithComment:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (void)layoutUI;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)a0;
- (void)changeNumberWithLogic:(id)a0;
- (void)reportExposeWithExtra:(id)a0;
- (void)reportClickWithExtra:(id)a0 product:(id)a1;
- (void)onWillOpenProduct:(id)a0;
- (void).cxx_destruct;

@end
