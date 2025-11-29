@class BaseResponse, StatusKeyValueConfig, NSMutableArray, StatusIconConfig, StatusCoverAgenda;

@interface StatusGetIconConfigListCgiResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StatusIconConfig *iconConfig;
@property (retain, nonatomic) StatusCoverAgenda *coverAgenda;
@property (retain, nonatomic) StatusKeyValueConfig *keyValueConfig;
@property (retain, nonatomic) NSMutableArray *iconConfigs;

+ (void)initialize;

@end
