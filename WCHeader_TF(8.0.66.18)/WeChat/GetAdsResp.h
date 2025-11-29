@class GetAdsResult, BaseResponse;

@interface GetAdsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) GetAdsResult *result;

+ (void)initialize;

@end
