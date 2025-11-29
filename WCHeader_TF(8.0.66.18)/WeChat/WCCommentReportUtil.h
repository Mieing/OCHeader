@interface WCCommentReportUtil : NSObject

+ (void)reportCommentPostErrorWithCommentItem:(id)a0 error:(int)a1 platform:(int)a2;
+ (void)reportCommentPostSuccess:(id)a0;
+ (void)reportCommentShowFail:(id)a0 comment:(id)a1;
+ (long long)getSnsCommentItemType:(id)a0;
+ (long long)getSnsCommentInfoType:(id)a0;
+ (long long)getWCUserCommentType:(id)a0;

@end
