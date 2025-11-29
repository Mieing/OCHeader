@interface AWENoticeTextAdapter : NSObject

+ (id)diggTextWithNotificationModel:(id)a0;
+ (id)commentTextWithNotificationModel:(id)a0;
+ (id)commentTextAuthorSelfWithNotificationModel:(id)a0;
+ (id)atTextAuthorSelfWithNotificationModel:(id)a0;
+ (id)viewerTextWithNotificationModel:(id)a0;
+ (id)imDisplayTitleWithModel:(id)a0;
+ (id)latestPushGuideNoticeAbstractInfo:(id)a0;
+ (id)liteInteractionQuoteReplaceTextIfNeeded:(id)a0 type:(long long)a1 isSending:(BOOL)a2;
+ (id)getTailStrWithTime:(id)a0 withSupplement:(id)a1;
+ (id)displayContentWithForwardModel:(id)a0;
+ (id)getDelNoticeText:(id)a0 unreadCount:(long long)a1;
+ (id)__detailTextWithNotificationAwemeModel:(id)a0;
+ (BOOL)isLegalModularizationUserName:(id)a0;
+ (BOOL)isNewModularizationNoticeForNotice:(id)a0;
+ (id)hintCommentTextWithNotificationType:(long long)a0 aweme:(id)a1 text:(id)a2;
+ (id)fansNoticeDisplayHintWithModel:(id)a0 displayName:(id)a1 content:(id)a2;
+ (id)diggHintForProfileDisplayHintTextWithModel:(id)a0;
+ (id)commentHintForProfileDisplayHintTextWithModel:(id)a0;
+ (id)atHintForProfileDisplayHintTextWithModel:(id)a0;
+ (id)atHintContentForProfileDisplayHintTextWithModel:(id)a0;
+ (id)commentHintContentWithNotificationModel:(id)a0;
+ (BOOL)isLegalModularizationUserSecName:(id)a0;
+ (id)profileDisplayHintTextWithModel:(id)a0;
+ (id)liteInteractionQuoteTextModel:(id)a0;

@end
