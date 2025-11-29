@class BaseResponse, StatusKeyValueConfig, NSMutableArray, StatusIconConfig, StatusCoverConfig;

@interface TextStatusGetIconConfigResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StatusIconConfig *iconConfig;
@property (retain, nonatomic) StatusCoverConfig *coverConfig;
@property (retain, nonatomic) StatusKeyValueConfig *keyValueConfig;
@property (retain, nonatomic) NSMutableArray *iconConfigs;

+ (void)initialize;

@end
