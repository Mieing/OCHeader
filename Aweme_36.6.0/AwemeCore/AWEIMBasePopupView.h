@class NSString, CAShapeLayer, UIView, UIButton;

@interface AWEIMBasePopupView : UIView

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long popupID;
@property (copy, nonatomic) id /* block */ popupViewDidActionCancel;
@property (copy, nonatomic) id /* block */ popupViewDidTapMask;
@property (copy, nonatomic) id /* block */ popupViewDidClickClose;

- (BOOL)bringToFront;
- (void)hideWithDuration:(double)a0;
- (void)contentViewPanAction:(id)a0;
- (void)p_showWithDuration:(double)a0;
- (void)p_setBasePopupViewUI;
- (void)showInView:(id)a0 duration:(double)a1;
- (void)bgMaskViewTapAction:(id)a0;
- (void)p_closeAction;
- (void)p_confirmAction;
- (void)adjustFrameIfNeededWithTargetView:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showInView:(id)a0;

@end
