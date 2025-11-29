@class UIVisualEffectView, UIImageView, AWEIMTopNoticeTipViewConfig, UILabel, UIView, UIButton;

@interface AWEIMJoinGroupApplyNoticeView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) id /* block */ cancelClickBlock;
@property (copy, nonatomic) id /* block */ actionClickBlock;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)didClickCloseButton:(id)a0;
- (void)didClickActionButton:(id)a0;
- (void)layoutMySubviews;
- (void)updateTipViewWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
