@interface AWESearchTopicCommentHelper : NSObject

+ (id)openCommentPanel:(BOOL)a0 commentInfo:(id)a1 insertReplyCids:(id)a2 attachObject:(id)a3 logExtra:(id)a4;
+ (id)openCommentPanel:(BOOL)a0 commentInfo:(id)a1 insertReplyCids:(id)a2 attachObject:(id)a3 logExtra:(id)a4 dataModel:(id)a5;
+ (id)getGeneralItemForTopicCommentCardModelForTopic:(id)a0 commentInfo:(id)a1;
+ (id)openCommentPanelForTopic:(BOOL)a0 commentGeneralModel:(id)a1 insertReplyCids:(id)a2 attachObject:(id)a3 logExtra:(id)a4;
+ (id)getGeneralItemForTopicCommentCardModel:(id)a0;

@end
