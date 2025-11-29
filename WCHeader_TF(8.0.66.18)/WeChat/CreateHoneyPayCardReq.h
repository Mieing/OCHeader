@class BaseRequest, NSString;

@interface CreateHoneyPayCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *authToken;
@property (nonatomic) unsigned long long creditLine;
@property (retain, nonatomic) NSString *userUsername;
@property (retain, nonatomic) NSString *takeMessage;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *wishing;
@property (nonatomic) BOOL isSignAgreement;

+ (void)initialize;

@end
