@class UIView, AWEIMMessageViewModel, UIImage, NSString, AWEIMMessage, UIImageView, NSDictionary, AWEIMMessageConversation, AWEIMConversationContext;
@protocol AWEIMMessageBaseTableViewCellDelegate;

@interface AWEIMMessageBaseTableViewCell : UITableViewCell <AWEIMTableViewCellProtocol, AWEIMCellVisibleLifeCycleRenderViewProtocol>

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageViewModel *viewModel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) UIImage *imBubbleGrandientImage;
@property (weak, nonatomic) id<AWEIMMessageBaseTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) NSString *senderSecUserID;
@property (nonatomic) double displayTime;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) BOOL chatListBackgroundIsBright;
@property (nonatomic) BOOL isMultiselect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (id)visibleContentView;
- (void)changeToMultiselect:(BOOL)a0;
- (void)changeToMultiselect:(BOOL)a0 animated:(BOOL)a1;
- (void)changeToSelect:(BOOL)a0;
- (void)configWithMessage:(id)a0;
- (BOOL)shouldShowRecallMenuItem;
- (void)updateStateView;
- (void)performCellWithViewModel:(id)a0;
- (id)selectedAttributedString;
- (void)updateEmojiReplyViewUI;
- (BOOL)shouldShowQuoteReplyMenuItem;
- (BOOL)shouldShowForwardMenuItem;
- (void)transferToAwemeDetail:(id)a0 params:(id)a1;
- (BOOL)isTextPartiallySelected;
- (void)postConfigWithMessage:(id)a0;
- (id)protocolCache;
- (void)highlightMessageCell;
- (void)handleDeleteMessageCellNotification:(id)a0;
- (void)layoutContainerViewAndSelectStateImageViewWithAnimated:(BOOL)a0;
- (void)layoutHighlightView;
- (void)assertCellContentView;
- (id)messageShowExtraTrackingParams;
- (BOOL)shouldShowEditMenuItem;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)setupUI;

@end
