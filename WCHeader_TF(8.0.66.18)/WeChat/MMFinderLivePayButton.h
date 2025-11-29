@class UIImageView, LOTAnimationView, UIView, MMUIButton, MMUILabel;

@interface MMFinderLivePayButton : MMUIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *containerButton;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMUILabel *priceInWecoinLabel;
@property (retain, nonatomic) MMUILabel *payTipsLabel;
@property (nonatomic) unsigned int priceInWecoin;
@property (retain, nonatomic) LOTAnimationView *breatheAnimationView;
@property (nonatomic) BOOL isTrialTimeout;
@property (nonatomic) BOOL isPayState;
@property (nonatomic) double fullSizeWith;
@property (nonatomic) double fullSizeOffsetX;
@property (nonatomic) BOOL isTicket;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) MMUILabel *retryViewTipLabel;
@property (copy, nonatomic) id /* block */ payButtonClickCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI:(BOOL)a0;
- (void)layoutRetryViewTipLabel;
- (void)layoutTipsLabels;
- (void)updatePriceInWecoin:(unsigned int)a0 payState:(BOOL)a1;
- (double)internalPayButtonWidth;
- (double)internalPayButtonTop;
- (void)updatePayState:(BOOL)a0 animated:(BOOL)a1;
- (void)updateButtonAccessibilityLabelWithPayTips:(id)a0;
- (void)startBubbleBreatheAnimation;
- (void)stopBubbleBreatheAnimation;
- (void)onPayButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
