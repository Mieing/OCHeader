@class UIImageView, UILabel, HTSLiveButton;

@interface IESLiveCommentInterFlowTipView : UIView

@property (retain, nonatomic) UIImageView *tipsWarmImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) HTSLiveButton *closeButton;
@property (copy, nonatomic) id /* block */ onCloseButtonTapped;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeButtonTapped;
- (void)setUpUI;

@end
