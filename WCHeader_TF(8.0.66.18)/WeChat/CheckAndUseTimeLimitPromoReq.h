@class BaseRequest, NSString;

@interface CheckAndUseTimeLimitPromoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *packetId;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

@end
