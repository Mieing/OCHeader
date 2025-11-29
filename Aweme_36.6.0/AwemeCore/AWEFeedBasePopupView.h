@class UIButton, CAShapeLayer, UIView;

@interface AWEFeedBasePopupView : UIView

@property (nonatomic) double contentViewHeight;
@property (retain, nonatomic) UIView *shadeView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) id /* block */ closeButtonClickAction;

- (void)closeButtonAction:(id)a0;
- (void)hideWithDuration:(double)a0;
- (void)contentViewPanAction:(id)a0;
- (void)p_showWithDuration:(double)a0;
- (void)p_setBasePopupViewUI;
- (void)showInView:(id)a0 duration:(double)a1;
- (void)shadeViewTapAction:(id)a0;
- (id)initWithContentViewHeight:(double)a0;
- (void)setCloseButtonHide:(BOOL)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)layoutSubviews;
- (void)showInView:(id)a0;

@end
