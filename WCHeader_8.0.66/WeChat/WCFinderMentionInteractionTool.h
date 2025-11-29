@interface WCFinderMentionInteractionTool : NSObject

+ (unsigned long long)interactionBusinessTypeWithMention:(id)a0;
+ (unsigned long long)supportInteractionActionWithMention:(id)a0;
+ (void)modCommentLikeStatus:(BOOL)a0 withMention:(id)a1 commentScene:(int)a2;
+ (void)postReplyComment:(id)a0 withMention:(id)a1;
+ (void)modMentionThankStatus:(BOOL)a0 withMention:(id)a1 finderUsername:(id)a2;
+ (void)modSilentStateWithMention:(id)a0 finderUsername:(id)a1 vc:(id)a2;

@end
