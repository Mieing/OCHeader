@class NSString, NSNumber, NSDictionary;

@interface AWEPSSOSecondaryVerificationInfo : NSObject

@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *sharkTicket;
@property (copy, nonatomic) NSNumber *verifyType;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *verifyMobile;
@property (copy, nonatomic) NSDictionary *OAuthInfo;

- (id)paramsDictionary;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
