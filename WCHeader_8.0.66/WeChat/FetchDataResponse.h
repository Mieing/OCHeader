@class NSMutableArray, BaseResponse;

@interface FetchDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *dataItem;

+ (void)initialize;

@end
