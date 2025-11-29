@class UIStackView, UIView, IESLiveInteractionEmojiContainer, UIImageView, UIButton, IESLiveInteractionEmojiPanelViewModel, UILabel, UIScrollView;
@protocol IESHYContainerProtocol;

@interface IESLiveInteractionEmojiPanelView : UIView

@property (retain, nonatomic) IESLiveInteractionEmojiPanelViewModel *viewModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *iconsContainerView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *connectButton;
@property (retain, nonatomic) UIButton *settingBtn;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UIButton *recognizeButton;
@property (retain, nonatomic) UIButton *avatarCloseButton;
@property (retain, nonatomic) UIButton *addSeatNameBtn;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *activityBannerLynxView;
@property (retain, nonatomic) UIStackView *itemsStackView;
@property (retain, nonatomic) UIStackView *modeItemsStackView;
@property (retain, nonatomic) UIScrollView *itemsScrollView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *connectModeView;
@property (retain, nonatomic) IESLiveInteractionEmojiContainer *emojiContainer;
@property (nonatomic) BOOL hasItemsScrollView;

- (double)itemMargin;
- (double)stackViewHeight;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (double)renderEmojiList:(double)a0;
- (double)renderPanelItems;
- (double)renderTopContainerView;
- (BOOL)showDisconnectBtn;
- (void)p_addObserveForGuestUser;
- (void)disconnectButtonAction:(id)a0;
- (void)additemsScrollView;
- (void)renderItemStackView:(id)a0;
- (void)guestHonorIconsContainerTapped;
- (void)renderGuestHonorItems;
- (void)addCustomItems:(id)a0;
- (void)renderActivityLynxBannerWithBanners:(id)a0;
- (void)settingBtnClick;
- (void)addSeatNameBtnClick;
- (void)recognizeButtonClick;
- (void)avatarCloseButtonClick;
- (double)itemSpacing;
- (void)dismiss;
- (void).cxx_destruct;
- (void)binding;
- (void)setupViews;

@end
