@class UIButton, AWEIMBottomQuoteCommonView, NSString, AWEIMRefreshImageView, YYLabel;

@interface AWEIMBottomQuoteReplyComponent : AWEIMComponentBase <AWEIMMessageListBottomQuoteViewProtocol, AWEIMFeedVideoMsgAssistManagerAction, AWEIMMessageListInputModuleAction, AWEIMBottomQuoteReplyInterface>

@property (retain, nonatomic) AWEIMBottomQuoteCommonView *quoteCommonView;
@property (retain, nonatomic) AWEIMRefreshImageView *coverView;
@property (retain, nonatomic) YYLabel *hintLabel;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) BOOL isShowingCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)closeBtnClicked:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)quoteReplyMessageID;
- (id)viewToDisplayInBottomContainer;
- (void)inputViewControllerResetShowQuoteReply:(id)a0;
- (void)setupQuoteReplyWithMessage:(id)a0;
- (void)setupQuoteReplyWithContextProvider:(id)a0;
- (void)didRebuildMessages:(id)a0;
- (void)updateQuoteReplyViewWithMessage:(id)a0;
- (void)updateCoverViewWithProvider:(id)a0;
- (void)updateCoverViewWithMessage:(id)a0;
- (id)p_displayNameWithMessage:(id)a0;
- (void)updateCoverViewLayoutIfNeeded:(BOOL)a0;
- (void)showCardMsgCover:(id)a0;
- (void)showImageMsgCover:(id)a0;
- (void)showMomentMsgCover:(id)a0;
- (void)showVideoMsgCover:(id)a0;
- (void)showBulletMsgCover:(id)a0;
- (void).cxx_destruct;
- (id)inputVC;
- (void)setupUI;

@end
