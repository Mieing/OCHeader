@interface AWEIMMessageBelowEmojiReplyUtility : NSObject

+ (BOOL)checkGiphyCanShowWithConversationContext:(id)a0;
+ (void)trackEmojiShowWithRenderModels:(id)a0 replyMessageType:(id)a1 conversation:(id)a2;
+ (void)trackEmojiClickWithRenderModel:(id)a0 replyMessageType:(id)a1 conversation:(id)a2;
+ (void)p_trackEvent:(id)a0 renderModel:(id)a1 replyMessageType:(id)a2 conversation:(id)a3;

@end
