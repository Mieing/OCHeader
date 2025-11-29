@class UIButton, IESLiveActionSheetPresentViewController, UIImageView, IESLiveFollowBackPanelViewModel, UIView, UILabel;
@protocol IESLiveFollowBackPanelViewDelegate;

@interface IESLiveFollowBackPanelView : UIView

@property (retain, nonatomic) IESLiveFollowBackPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (weak, nonatomic) id<IESLiveFollowBackPanelViewDelegate> delegate;

- (void)bindViewModel:(id)a0;
- (void)setupAutoLayout;
- (void)showWithPanelViewModel:(id)a0;
- (void)layoutViewTopCornerRadius:(id)a0 cornerRadius:(double)a1;
- (void)presentOnTopViewController;
- (void)actionButtonAction:(id)a0 event:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
