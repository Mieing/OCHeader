@class NSString, NSArray, UIImage, IESAccountSecurityTicketModel, NSNumber, NSDictionary;

@interface IESAccountPassportResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *captcha;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *larkEmployeeTicket;
@property (retain, nonatomic) NSArray *verifyWays;
@property (retain, nonatomic) IESAccountSecurityTicketModel *ticketModel;
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
