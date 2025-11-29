@class UIVisualEffectView, AWEIMTopNoticeTipViewConfig, UILabel, UIView, UIButton;

@interface AWEIMTopNoticeTipView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) id /* block */ cancelClickBlock;
@property (copy, nonatomic) id /* block */ actionClickBlock;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)didClickCloseButton:(id)a0;
- (void)didClickActionButton:(id)a0;
- (void)showTipViewWithConfig:(id)a0;
- (double)getTipViewBottom;
- (void)layoutMySubviews;
- (void)layoutLeftView;
- (void)updateTipViewWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
