@class NSString;

@interface IESIMInputSendBusinessComponent : AWEIMComponentBase <IESIMInputSendBusinessInterface, IESIMInputSendComponentAction, IESIMInputLayoutAction>

@property (nonatomic) BOOL preStyleIsEditting;
@property (nonatomic) BOOL preTextHasText;
@property (nonatomic) BOOL isFromUrgeForFeedDig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sendBtnClicked:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)sendTextViewTextMessage:(BOOL)a0;
- (BOOL)enableBroadenSendBtn;
- (BOOL)shouldDisableSendWhileAIReplyingWithToast:(BOOL)a0;
- (void)sendInputContent:(BOOL)a0;
- (void)triggerLayoutRightButton;
- (BOOL)sendButtonStyleChanged;
- (BOOL)shouldShowSendButton;

@end
