@class NSMutableArray, BaseResponse;

@interface StoryDateDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int storyCount;
@property (retain, nonatomic) NSMutableArray *storyList;
@property (nonatomic) unsigned long long limitedId;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
