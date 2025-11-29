@class CAGradientLayer, NSString, UIImageView, LOTAnimationView, UILabel, UIView, PAGView;

@interface MMFinderLiveMilestoneLotteryBannerView : UIView <MMFinderLiveMilestoneLotteryViewModelExt>

@property (retain, nonatomic) UIImageView *bannerImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *bannerContainerView;
@property (retain, nonatomic) UILabel *pagCountdownLabel;
@property (retain, nonatomic) LOTAnimationView *lotPacketView;
@property (retain, nonatomic) PAGView *pagPacketView;
@property (retain, nonatomic) CAGradientLayer *pagCountdownGradientBGLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;
+ (struct CGSize { double x0; double x1; })packetAnimationSize;
+ (double)widthWithoutText;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)resizeComponentsIfNeeded;
- (void)layoutSubviews;
- (void)onOngoingLotteryCountdown:(id)a0 remainingSeconds:(unsigned int)a1;
- (void)setText:(id)a0;
- (void)showLotteryPacketViewWithCurrentSeconds:(unsigned int)a0;
- (void)switchToBannerStyle;
- (void)switchToPacketStyle;
- (void)updateCountdownLabelWithSeconds:(unsigned int)a0;
- (void)onAppBecomeActive;
- (BOOL)isUsePAG;
- (void).cxx_destruct;

@end
