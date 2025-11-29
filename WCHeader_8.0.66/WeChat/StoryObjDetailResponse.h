@class StoryObject, BaseResponse;

@interface StoryObjDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StoryObject *storyObject;

+ (void)initialize;

@end
