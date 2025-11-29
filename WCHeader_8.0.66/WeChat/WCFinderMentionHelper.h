@interface WCFinderMentionHelper : NSObject

+ (id)mockCommentForReplyWithMention:(id)a0 withDisplayName:(id)a1;
+ (void)modifyReplyComment:(id)a0 withMention:(id)a1 commentScene:(int)a2;
+ (id)genReplyCommentWithMention:(id)a0 commentScene:(int)a1 replyContent:(id)a2;
+ (id)genLikeCommentWithMention:(id)a0 likeFlag:(BOOL)a1 commentScene:(int)a2;
+ (id)genMentionCommentActionUdfKVWithMention:(id)a0;
+ (id)feedTypeTagTextWithMention:(id)a0;
+ (void)followMentionContact:(id)a0 enterType:(int)a1 commentScene:(int)a2;
+ (id)genFansProfileVCWithMention:(id)a0 getMentionListScene:(unsigned long long)a1 profileRefScene:(unsigned long long)a2 updateBlock:(id /* block */)a3;
+ (void)tryShowMentionSilentEduWithMentionList:(id)a0 showBlock:(id /* block */)a1;

@end
