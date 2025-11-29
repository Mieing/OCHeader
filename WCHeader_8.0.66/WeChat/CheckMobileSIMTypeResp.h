@class BaseResponse;

@interface CheckMobileSIMTypeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int cacheExpiredTime;
@property (nonatomic) unsigned int productType;
@property (nonatomic) unsigned int businessFlag;

+ (void)initialize;

@end
