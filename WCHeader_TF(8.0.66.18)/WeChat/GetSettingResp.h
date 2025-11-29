@class NSMutableArray, BaseResponse;

@interface GetSettingResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
