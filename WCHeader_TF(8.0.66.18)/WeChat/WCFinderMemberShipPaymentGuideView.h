@class UIButton, UIVisualEffectView, UIView, UILabel, MMUILabel;
@protocol WCFinderHalfScreenListenProtocol, WCFinderMemberShipPaymentGuideViewDelegate;

@interface WCFinderMemberShipPaymentGuideView : UIView

@property (nonatomic) double operationAreaTopPosition;
@property (retain, nonatomic) UIVisualEffectView *blurMaskView;
@property (retain, nonatomic) UIView *blackMaskView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (weak, nonatomic) id<WCFinderMemberShipPaymentGuideViewDelegate> delegate;
@property (weak, nonatomic) id<WCFinderHalfScreenListenProtocol> halfScreenDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)layoutMaskView;
- (void)layoutBlackMaskView;
- (void)layoutTipsLabel;
- (void)layoutSubviews;
- (void)setLineSpace:(double)a0 withText:(id)a1 inLabel:(id)a2;
- (void)layoutConfirmButton;
- (void)layoutCycleLabel;
- (void)updateConfirmTips:(id)a0 centerTips:(id)a1;
- (void)halfScreenStateChanged;
- (void)_updateLayout;
- (double)_tipLabelTopPositionWithHalfScreenViewProgress:(double)a0 halfScreenHeightPercent:(double)a1;
- (void)onConfirm;
- (void).cxx_destruct;

@end
