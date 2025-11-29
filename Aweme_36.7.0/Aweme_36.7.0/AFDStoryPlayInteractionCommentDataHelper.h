@interface AFDStoryPlayInteractionCommentDataHelper : NSObject

+ (long long)commentLevelWithModel:(id)a0;
+ (unsigned long long)indexToInsertLevelThreeComment:(id)a0 commentList:(id)a1;
+ (unsigned long long)indexToInsertLevelTwoComment:(id)a0 commentList:(id)a1;
+ (id)deleteLevelOneComment:(id)a0 inCommentList:(id)a1;
+ (id)deleteLevelTwoComment:(id)a0 inCommentList:(id)a1;
+ (id)deleteLevelThreeComment:(id)a0 inCommentList:(id)a1;
+ (unsigned long long)indexToInsertComment:(id)a0 commentList:(id)a1;
+ (id)deleteComment:(id)a0 inCommentList:(id)a1;

@end
