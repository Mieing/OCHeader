@class BaseRequest, NSString, PayGenActionLocation;

@interface GetHoneyPayCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) PayGenActionLocation *location;
@property (nonatomic) BOOL isSignAgreement;

+ (void)initialize;

@end
