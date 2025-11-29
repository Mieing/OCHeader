@class NSString, UIImageView, UILabel, UIView, WCFinderThanksButtonConfig;
@protocol WCFinderThanksButtonDelegate;

@interface WCFinderThanksButton : UIView <PAGViewListener>

@property (retain, nonatomic) UIView *btnContainer;
@property (retain, nonatomic) UIView *btnBackgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderThanksButtonConfig *config;
@property (nonatomic) BOOL iconPagAnimating;
@property (nonatomic) BOOL buttonBgAnimating;
@property (nonatomic) BOOL thankState;
@property (weak, nonatomic) id<WCFinderThanksButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isfriendThanksOn;
+ (BOOL)isfriendThanksSingleOn;
+ (double)buttonWidthWithConfig:(id)a0 thankState:(BOOL)a1;
+ (id)thanksIconImageWithConfig:(id)a0 thankState:(BOOL)a1;
+ (id)titleTextWithConfig:(id)a0 thanksState:(BOOL)a1;

- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (void)updateConfig;
- (void)sizeToFit;
- (void)layoutUI;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (void)updateThankState:(BOOL)a0;
- (void)flushUIState;
- (void)onTapGes:(id)a0;
- (void)tryPlayMagicAnimation;
- (BOOL)isAnimating;
- (unsigned long long)magicAnimationStyle;
- (void)tryPlayButtonFadeAnimationWithStayDuration:(double)a0;
- (void)tryPlayThanksAnimation;
- (id)createThanksAnimationPag;
- (id)thanksAnimationPagFileName;
- (void)onAnimationEnd:(id)a0;
- (void).cxx_destruct;

@end
