@class NSMutableArray, BaseResponse;

@interface FinderRefreshTipsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int roundRobinInterval;
@property (retain, nonatomic) NSMutableArray *entryList;

+ (void)initialize;

@end
