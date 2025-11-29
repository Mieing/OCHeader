@interface AFDStoryPlayInteractionCommentTextHelper : NSObject

+ (long long)commentTypeWithModel:(id)a0;
+ (id)imageCommentAttributeTextWithModel:(id)a0;
+ (id)stickerCommentAttributeTextWithModel:(id)a0;
+ (id)userAreaAttributeTextWithUserName:(id)a0 replyUserName:(id)a1 font:(id)a2;
+ (id)commentContentAttributeTextWithModel:(id)a0 width:(double)a1 font:(id)a2;
+ (id)getReplyUserNameWithModel:(id)a0 commentList:(id)a1;

@end
