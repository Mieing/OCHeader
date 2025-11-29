@class NSString, UIImageView, CAShapeLayer, UILabel, UIView, UIButton;

@interface AWEMusicFeedLikeAlertView : UIView

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *confirm;
@property (copy, nonatomic) NSString *cancel;
@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (copy, nonatomic) id /* block */ onConfirmBlock;
@property (copy, nonatomic) id /* block */ onCancelBlock;

- (void)contentViewPanAction:(id)a0;
- (void)p_showWithDuration:(double)a0;
- (void)p_setBasePopupViewUI;
- (void)showInView:(id)a0 duration:(double)a1;
- (void)maskViewTapAction:(id)a0;
- (void)p_hideWithdMethod:(id /* block */)a0;
- (void)hideWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)closeBtnHandler;
- (void)confirmBtnHandler;
- (void)cancelBtnHandler;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showInView:(id)a0;

@end
