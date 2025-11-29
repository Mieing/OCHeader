@class BaseRequest, NSString;

@interface BizRecommendTimeLineCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long clientId;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end
