@class NSString;

@interface QRCodeOAuthState : MMObject

@property (nonatomic) unsigned int errCode;
@property (copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *confirmRedirectUrl;
@property (copy, nonatomic) NSString *confirmWording;
@property (copy, nonatomic) NSString *nickName;

- (id)description;
- (void).cxx_destruct;

@end
