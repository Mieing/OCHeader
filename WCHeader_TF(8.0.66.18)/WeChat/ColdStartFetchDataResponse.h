@class NSString, NSMutableArray, BaseResponse;

@interface ColdStartFetchDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *respData;
@property (retain, nonatomic) NSMutableArray *respItemList;

+ (void)initialize;

@end
