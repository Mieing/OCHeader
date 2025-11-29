@interface AWESystermlMessageController : NSObject

+ (id)msgIdForSendSystemNoticeToConversation:(id)a0 fullText:(id)a1 aweType:(long long)a2;
+ (void)sendSendNoticeToConversation:(id)a0 fullText:(id)a1 highLightText:(id)a2 link:(id)a3;
+ (void)sendSendNoticeToConversation:(id)a0 fullText:(id)a1 highLightText:(id)a2 link:(id)a3 aweType:(long long)a4;
+ (id)richTextNoticeMessageWithFullText:(id)a0 highLightText:(id)a1 link:(id)a2 aweType:(long long)a3;

@end
