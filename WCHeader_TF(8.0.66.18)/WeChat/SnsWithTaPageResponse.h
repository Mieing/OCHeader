@class NSMutableArray, BaseResponse;

@interface SnsWithTaPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned long long maxFeedId;
@property (nonatomic) unsigned long long minFeedId;
@property (nonatomic) int hasMore;

+ (void)initialize;

@end
