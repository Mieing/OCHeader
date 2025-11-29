@class NSString, BaseResponse;

@interface BizRecommendTimeLineCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long clientId;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int refreshIntervalSec;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end
