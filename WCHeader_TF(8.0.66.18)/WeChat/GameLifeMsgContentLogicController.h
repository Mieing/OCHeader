@class NSDictionary, NSString;

@interface GameLifeMsgContentLogicController : BypMsgContentLogicController <GameLifeMsgChatInfoViewControllerDelegate, GameLifeContactExt>

@property BOOL shouldShowSendPic;
@property BOOL shouldShowCamera;
@property BOOL shouldShowEmotionBoard;
@property BOOL shouldShowAttachButton;
@property (retain, nonatomic) NSDictionary *reportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionId:(id)a0;
- (void)configWithSessionId:(id)a0;
- (void)Register;
- (void)UnRegister;
- (BOOL)CanSendImageMsg:(id)a0;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendEmoticonMessage;
- (id)getSubTitle;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (id)getInputToolViewDisplayName:(id)a0 tag:(id)a1 accountType:(unsigned int)a2 inputViewWidth:(unsigned int)a3;
- (id)getShortNickName:(id)a0 isWithTag:(BOOL)a1;
- (BOOL)isHighSurrogate:(unsigned short)a0;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)a0;
- (void)clickLinkToDealWithSysXml:(id)a0 fromScene:(id)a1;
- (void)onPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (void)ViewWillAppear;
- (BOOL)canSendCaptureImage;
- (BOOL)canSendLivePhoto;
- (BOOL)canPasteImage;
- (void)onOpenMediaBrowser;
- (void)onOpenCameraController;
- (void)showPermissionAlert:(id)a0;
- (id)getMsgSendOpEntry;
- (id)getInputToolWeAppOpEntryAr;
- (BOOL)IsShowAttachmentButtonRedDot;
- (long long)getInputToolWeAppNotShowIndex;
- (void)OnClickAttachmentButton:(BOOL)a0;
- (void)onInputToolWeAppButtonClickedWithItem:(id)a0;
- (void)onGameLifeProfileClearAllMsg;
- (void)onGameLifeContactUpdate:(id)a0;
- (void)reportJumpToChatInfoView;
- (void)reportAvatarClick:(id)a0 message:(id)a1;
- (void).cxx_destruct;

@end
