@class NSMutableArray, BaseResponse;

@interface BatchSearchHardDeviceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *searchResult;

+ (void)initialize;

@end
