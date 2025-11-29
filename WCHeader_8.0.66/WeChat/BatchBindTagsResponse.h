@class NSMutableArray, BaseResponse;

@interface BatchBindTagsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int newTagCount;
@property (retain, nonatomic) NSMutableArray *newTagList;

+ (void)initialize;

@end
