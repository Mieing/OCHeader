@class BaseRequest, NSString, NSData, NSMutableArray;

@interface GetGatewayUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSData *reqSpamInfo;
@property (retain, nonatomic) NSMutableArray *clientIps;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSString *realCountry;

+ (void)initialize;

@end
