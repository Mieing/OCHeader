@class StoryObject, BaseResponse;

@interface StoryCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StoryObject *storyObject;
@property (nonatomic) unsigned int commentId;

+ (void)initialize;

@end
