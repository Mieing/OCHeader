@class AWEIMMessage;

@interface AWEIMLightCameraUtility : NSObject

@property (class, retain, nonatomic) AWEIMMessage *recordedMessage;

+ (BOOL)shouldDisableMenuItemWithMessage:(id)a0;
+ (BOOL)shouldReloadViewModelWithOriginMessage:(id)a0 updateMessage:(id)a1;
+ (id)generateLightReplyRouterParamsWithMessage:(id)a0;
+ (void)setRecordedMessage:(id)a0;
+ (BOOL)shouldShowReplyStyleInPushWithMessage:(id)a0;
+ (BOOL)isRepliedFromLightCameraMessageWithMessage:(id)a0;
+ (BOOL)shouldShowReliedStyleWithMessage:(id)a0;
+ (BOOL)shouldShowReplyButtonInMesageListWithGiphyMessage:(id)a0;
+ (id)generateLightCameraReplyMessageExtra;
+ (void)trackLightCameraWithMessageIfNeeded:(id)a0 event:(id)a1;
+ (id)recordedMessage;
+ (void)markRecordedMessageReplied;
+ (BOOL)checkLightCameraEmojiResource;
+ (void)checkShouldShowLightCameraEntryWithCompletion:(id /* block */)a0 conversationID:(id)a1;
+ (void)trackLightCameraClickWithEnterMethod:(id)a0;
+ (void)sendLightCameraMessageWithConversationID:(id)a0 enterMethod:(id)a1;
+ (void)findAndRecordRepliedMessage:(id)a0 messageId:(id)a1;
+ (void)transferToShootViewControllerWithEntrance:(id)a0 configIMModelBlock:(id /* block */)a1 beforePresentBlock:(id /* block */)a2 conversation:(id)a3 completion:(id /* block */)a4;
+ (BOOL)shouldAlienationTreatmentHint:(id)a0;
+ (id)lightCameraHintWithMessag:(id)a0;
+ (BOOL)checkShowReplyButtonInMessageListCommonConditionWithMessage:(id)a0;
+ (BOOL)checkCommonConditionWithMessage:(id)a0;
+ (id)adjustOriginStringColorToTargetColor:(id)a0 originAttributedString:(id)a1;
+ (id)appendLightCameraStringWithOriginString:(id)a0;
+ (id)p_generateLightCameraMessageWithEnterMethod:(id)a0;
+ (void)appendEnterMethodWithMessage:(id)a0 enterMethod:(id)a1;
+ (BOOL)shouldShowReplyButtonInMesageListWithTextMessage:(id)a0;
+ (id)adjustOriginStringToLightCameraReplyStirngWithOriginAttributedString:(id)a0;
+ (void)checkUserSendMessagePrivilegeWithCompletion:(id /* block */)a0 conversation:(id)a1;

@end
