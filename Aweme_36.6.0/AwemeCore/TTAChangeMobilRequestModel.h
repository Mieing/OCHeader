@class NSString, NSDictionary;

@interface TTAChangeMobilRequestModel : NSObject

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *codeString;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *unusableMobileTicket;
@property (retain, nonatomic) NSDictionary *customParams;

- (void).cxx_destruct;

@end
