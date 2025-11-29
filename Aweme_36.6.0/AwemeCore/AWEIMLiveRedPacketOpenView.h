@class AWEGradientView, NSMutableArray, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMLiveRedPacketOpenView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *layoutContainer;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEGradientView *backgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (copy, nonatomic) id /* block */ closeTapAction;
@property (copy, nonatomic) id /* block */ jumpTapAction;
@property (retain, nonatomic) NSMutableArray *binds;

- (void)p_constraintSubViews;
- (void)p_onTapCloseBtn;
- (void)p_onTapJumpBtn;
- (void)bindWithProps:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
