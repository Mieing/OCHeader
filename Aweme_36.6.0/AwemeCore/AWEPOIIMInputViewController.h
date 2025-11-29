@class NSString, NSDictionary, UIView;
@protocol AWEIMPOIInputViewControllerDelegate, IESIMGrowingTextViewProtcol, UITextViewDelegate;

@interface AWEPOIIMInputViewController : AWEIMDNewInputViewController <AWEIMInputViewControllerDelegate, AWEIMPOIInputViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) UIView<IESIMGrowingTextViewProtcol, UITextViewDelegate> *textView;
@property (readonly, nonatomic) long long currentInputType;
@property (weak, nonatomic) id<AWEIMPOIInputViewControllerDelegate> inputVCDelegate;
@property (copy, nonatomic) NSDictionary *adParams;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL notNeedLeftButtons;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) BOOL panelUseLocalConfigOnly;
@property (nonatomic) BOOL isShowingInPOIIMConversationViewController;

+ (double)defaultInputHeight;

- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (void)inputViewController:(id)a0 growingTextViewDidChange:(id)a1;
- (void)inputViewController:(id)a0 inputViewTypeDidChange:(long long)a1 oldInputViewType:(long long)a2;
- (void)inputViewControllerDidChangeHeight;
- (void)invoke_growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)p_inputViewController:(id)a0 growingTextViewDidChange:(id)a1;
- (void)didSendContent:(id)a0 mentionUsers:(id)a1 textView:(id)a2 userInfo:(id)a3 quotedMessageId:(id)a4 customToast:(id)a5 trackParams:(id)a6;
- (void)didSendContent:(id)a0 mentionUsers:(id)a1 textView:(id)a2 userInfo:(id)a3 quotedMessageId:(id)a4 customToast:(id)a5 sendFrom:(long long)a6 trackParams:(id)a7;
- (void)inputStateDidChange:(id)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)checkUserSendMessagePrivilegeWithCompletion:(id /* block */)a0 messageType:(long long)a1;
- (void)handelKeyboardShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)handelKeyboardDidShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)didHandleKeyboardHideNoti:(id)a0;
- (void)hideInputVCAndDoThenShowInputVCWithAnimationOption:(unsigned long long)a0 hideCompletion:(id /* block */)a1;
- (void)hideInputVCAndDoThenShowInputVC:(id /* block */)a0;
- (void)didStartWatchVideoTogether:(id)a0;
- (void)didStartGameRoomEnterFrom:(long long)a0;
- (void)didSendMenuSilentMessageWithEvent:(id)a0 menuKey:(id)a1;
- (void)inputViewController:(id)a0 didSendEmoticon:(id)a1 belongToTheme:(id)a2;
- (void)didSendAssets:(id)a0;
- (void)onLifePhotoButtonOnChatPanelClicked;
- (void)onLifeCameraButtonOnChatPanelClicked;
- (void)onLifeArticlesButtonOnChatPanelClicked;
- (void)onLifeOrdersButtonOnChatPanelClicked;
- (id)initWithFunctions:(id)a0 wrappedInContainerVC:(BOOL)a1;
- (void)hasMatchedEmotions:(id)a0;
- (void)didStartVideoVoip;
- (void)didStartAudioVoip;
- (void)didStartGroupVideoVoip;
- (void)didStartGroupAudioVoip;
- (void)didClickFansCoupon;
- (void)didClickWhatAreYouDoing;
- (void)didClickLiveGroupAnnouncement;
- (void)didClickShareLocation;
- (void)didClickExchangeImage;
- (void)didClickExchangeAnswer;
- (void)didStartVideoVoipAndAudioVoip;
- (void)didStartSingTogether;
- (void)didClickFansCommodity;
- (void)didClickSendGoodsOrOrders:(unsigned long long)a0;
- (void)didStartWatchVideoTogether;
- (BOOL)isFansCouponButtonEnable;
- (void).cxx_destruct;

@end
