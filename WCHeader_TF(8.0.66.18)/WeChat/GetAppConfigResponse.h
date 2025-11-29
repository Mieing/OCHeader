@class NSMutableArray, BaseResponse;

@interface GetAppConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appConfigList;

+ (void)initialize;

@end
