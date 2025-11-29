@class IESLiveWebpLoadingView, MASConstraint, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveScreencastResultView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) MASConstraint *descTopConstraint;
@property (copy, nonatomic) id /* block */ buttonClickedAction;

- (void)clickedActionButton;
- (void)screenshotSuccess:(id)a0 showTip:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
