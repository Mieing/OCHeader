@class UIStackView, UIScrollView, IESLivePKGuestOperatePanelViewModel, IESLivePKGuestEmojiContainer, UILabel, UIView, UIButton;

@interface IESLivePKGuestOperatePanelView : UIView

@property (retain, nonatomic) IESLivePKGuestOperatePanelViewModel *viewModel;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *connectButton;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UIStackView *itemsStackView;
@property (retain, nonatomic) UIStackView *modeItemsStackView;
@property (retain, nonatomic) UIScrollView *itemsScrollView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *connectModeView;
@property (retain, nonatomic) IESLivePKGuestEmojiContainer *emojiContainer;

- (double)itemMargin;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)setupGameViews;
- (double)renderEmojiList:(double)a0;
- (double)renderPanelItems;
- (double)renderTopContainerView;
- (BOOL)showDisconnectBtn;
- (void)p_addObserveForGuestUser;
- (void)disconnectButtonAction:(id)a0;
- (double)itemSpacing;
- (void)dismiss;
- (void).cxx_destruct;
- (void)binding;
- (void)setupViews;

@end
