@class NSString, NSArray, UIImage, DYASecurityTicketModel, NSNumber, NSDictionary;

@interface DYAPassportResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *captcha;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *larkEmployeeTicket;
@property (retain, nonatomic) NSArray *verifyWays;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (copy, nonatomic) NSDictionary *OAuthInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)additionJSONKeyValueDictionary:(id)a0;
+ (id)verifyWaysJSONTransformer;
+ (id)captchaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isRequestSuccess;
- (void).cxx_destruct;
- (BOOL)isSessionExpired;

@end
