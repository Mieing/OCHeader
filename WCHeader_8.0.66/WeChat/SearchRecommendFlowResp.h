@class NSData, NSMutableArray, BaseResponse;

@interface SearchRecommendFlowResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *searchRecommendItemList;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) unsigned int hasMore;

+ (void)initialize;

@end
