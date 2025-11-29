@class IESLiveActionSheetPresentViewController, IESLiveInteractionChatGroupPanelViewModel, UIImageView, UIView, UILabel, UIButton;
@protocol IESLiveInteractionChatGroupPanelViewDelegate;

@interface IESLiveInteractionChatGroupPanelView : UIView

@property (retain, nonatomic) IESLiveInteractionChatGroupPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *audienceImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (weak, nonatomic) id<IESLiveInteractionChatGroupPanelViewDelegate> delegate;

- (void)p_setupView;
- (void)p_bindViewModel:(id)a0;
- (void)showWithPanelViewModel:(id)a0;
- (void)actionButtonAction:(id)a0 event:(id)a1;
- (void)p_setupAutoLayout;
- (void)p_layoutViewTopCornerRadius:(id)a0 cornerRadius:(double)a1;
- (void)p_presentOnTopViewController;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
