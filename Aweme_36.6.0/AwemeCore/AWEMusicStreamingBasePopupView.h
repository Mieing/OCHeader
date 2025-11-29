@class UIButton, CAShapeLayer, UIView;
@protocol AWEMusicStreamingPopupViewDelegate;

@interface AWEMusicStreamingBasePopupView : UIView

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (weak, nonatomic) id<AWEMusicStreamingPopupViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)contentViewPanAction:(id)a0;
- (void)p_showWithDuration:(double)a0;
- (void)p_setBasePopupViewUI;
- (void)showInView:(id)a0 duration:(double)a1;
- (void)maskViewTapAction:(id)a0;
- (void)p_hideWithdMethod:(long long)a0;
- (void)closeBtnHandler;
- (void)confirmBtnHandler;
- (void)hideWithDuration:(double)a0 method:(long long)a1;
- (id)customConfirmButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showInView:(id)a0;

@end
