@class NSString;

@interface AWEIMSilverWingManager : NSObject <AWEUserMessage, IESIMSilverWingInterface>

@property (nonatomic) long long agreeStatus;
@property (nonatomic) long long emotionBotAgreeStatus;
@property (copy, nonatomic) NSString *feedbackContent;
@property (copy, nonatomic) NSString *feedbackSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSilverWingChatBotWithConversation:(id)a0;
+ (BOOL)isSupportSendWithMessageType:(long long)a0;
+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)canShowMessage:(id)a0;
- (id)attachmentAttributedStringWithKernSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (void)storeAgreementStatus:(BOOL)a0;
- (void)storeEmotionBotAgreementStatus:(BOOL)a0;
- (BOOL)emotionBotAgreementStatus;
- (void)invokeSilverWingInfoPanelWithWithBot:(id)a0 conversationID:(id)a1 enterSource:(unsigned long long)a2 trackerParams:(id)a3;
- (void)showGroupManageAICloneViewControllerWithAIClone:(id)a0 con:(id)a1 didRemoveAICloneBlock:(id /* block */)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)showGroupAddAICloneViewControllerWithUserID:(long long)a0 con:(id)a1 didAddBlock:(id /* block */)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (id)attachmentWithsize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (unsigned long long)profileEnterSourceWithSource:(unsigned long long)a0;
- (void)p_showAIPanelWithBotID:(id)a0 con:(id)a1 trackParams:(id)a2;
- (void)invokeSilverWingInfoPanelWithWithBot:(id)a0 conversationID:(id)a1 trackerParams:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)agreementStatus;

@end
