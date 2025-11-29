@class StoryObject, BaseResponse;

@interface StoryPostResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StoryObject *storyObject;
@property (nonatomic) unsigned int postedCount;
@property (nonatomic) unsigned int nextPostPeriod;

+ (void)initialize;

@end
