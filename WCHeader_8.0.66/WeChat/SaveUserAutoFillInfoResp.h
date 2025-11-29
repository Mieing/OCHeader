@class NSMutableArray, BaseResponse;

@interface SaveUserAutoFillInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *groupItemList;

+ (void)initialize;

@end
