@interface AWEIMQuoteReplyUtility : NSObject

+ (id)replyYouStringWithSenderName:(id)a0;
+ (id)quoteTitleWithMaxWidth:(double)a0 title:(id)a1 tailString:(id)a2;
+ (id)quoteTitleForRecommendAwemeToFriendsWithMessage:(id)a0;
+ (double)preferQuoteTitleMaxWidthWithSceneType:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })coverSizeWithOriginCoverSize:(struct CGSize { double x0; double x1; })a0;
+ (id)quoteTitleForReplyGroupUnreadVideo:(id)a0 replyUid:(id)a1 sceneType:(unsigned long long)a2;
+ (BOOL)quoteContentIsAvailableWithMessage:(id)a0;

@end
