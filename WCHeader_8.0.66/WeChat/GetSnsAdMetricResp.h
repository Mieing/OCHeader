@class NSString, BaseResponse;

@interface GetSnsAdMetricResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *snsAdId;
@property (retain, nonatomic) NSString *extSnsInfo;

+ (void)initialize;

@end
