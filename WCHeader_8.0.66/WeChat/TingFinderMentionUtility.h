@interface TingFinderMentionUtility : MMObject

+ (BOOL)isSupportJumpTing;
+ (BOOL)isTingFinderMention:(id)a0;
+ (unsigned long long)tingFinderMentionSourceType:(id)a0;
+ (id)gen20763KVReportDictFromMention:(id)a0;
+ (id)uniCommentBypassMessageFromMention:(id)a0;
+ (void)openTingPageWithMention:(id)a0 refCommentId:(unsigned long long)a1 fromViewController:(id)a2;
+ (void)playWithListenId:(id)a0 refCommentId:(unsigned long long)a1 fromViewController:(id)a2 mention:(id)a3;
+ (void)openCatgeoryWithCategoryId:(id)a0 refCommentId:(unsigned long long)a1 fromViewController:(id)a2 mention:(id)a3;
+ (BOOL)isSupportTingInteractionAction;
+ (BOOL)isTingFinderMentionSupportInteractionActionThanks:(id)a0;
+ (void)modMentionThankStatus:(BOOL)a0 withMention:(id)a1 finderUsername:(id)a2;
+ (BOOL)isTingFinderMentionSupportInteractionActionCommentLike:(id)a0;
+ (void)modCommentLikeStatus:(BOOL)a0 withMention:(id)a1 commentScene:(int)a2;
+ (BOOL)isTingFinderMentionSupportInteractionActionCommentReply:(id)a0;
+ (void)replyCommentWithComment:(id)a0 withMention:(id)a1;
+ (unsigned long long)commentCgiTypeWithMention:(id)a0;
+ (BOOL)shouldJumpToTingCommentWithMention:(id)a0;
+ (void)showForbidJumpTips:(id)a0;

@end
