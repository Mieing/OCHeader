@class MMInputToolView, W1wPersonalMsgSessionInfo, NSString, W1wUserContact;

@interface W1wPersonalMsgContentLogicController : BypMsgContentLogicController <W1wUserContactMgrExt, MMGrowTextViewDelegate>

@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) W1wUserContact *contact;
@property (retain, nonatomic) W1wPersonalMsgSessionInfo *sessionInfo;
@property (weak, nonatomic) MMInputToolView *toolViewEx;
@property (retain, nonatomic) NSString *pageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)GetMessageFromImage:(id)a0;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (BOOL)canSendLivePhoto;
- (BOOL)canSendCaptureImage;
- (BOOL)canPasteImage;
- (BOOL)checkCanUseAttachmentWithNeedAlert:(BOOL)a0;
- (id)initWithContact:(id)a0 sessionInfo:(id)a1;
- (void)configWithSessionId:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)ViewDidDisappear;
- (void)onWillPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (void)OpenContactInfo:(id)a0;
- (void)OpenDetailInfo;
- (void)showReplyTipsIfNeed;
- (void)showSecureInformIfNeed;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendVideoMsg;
- (BOOL)textViewHeadViewSeparateStyle;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (void)clickChangeIdentityAction;
- (void)clickSend;
- (void)W1wUserContactUpdatedForUsername:(id)a0 contact:(id)a1;
- (void)onW1wPersonalMsgSessionReplyTipsUpdatedForSessionInfo:(id)a0;
- (void)onW1wPersonalMsgAdded:(id)a0 message:(id)a1;
- (void)onW1wPersonalMsgSessionCanRecvMsgUpdatedForSessionInfo:(id)a0;
- (void)onW1wPersonalMsgSessionCanChangeIdentityUpdatedForSessionInfo:(id)a0;
- (void).cxx_destruct;

@end
