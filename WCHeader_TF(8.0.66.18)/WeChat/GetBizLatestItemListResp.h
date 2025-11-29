@class NSMutableArray, BaseResponse;

@interface GetBizLatestItemListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
