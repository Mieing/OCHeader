@class NSMutableArray, BaseResponse;

@interface StoryObjectCommentsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int objCount;
@property (retain, nonatomic) NSMutableArray *objList;

+ (void)initialize;

@end
