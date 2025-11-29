@class NSString;

@interface TTAAccountVerifyRequestModel : NSObject

@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *verifyTicket;

- (void).cxx_destruct;

@end
