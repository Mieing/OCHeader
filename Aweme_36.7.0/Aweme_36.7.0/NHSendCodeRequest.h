@class NSString;

@interface NHSendCodeRequest : NSObject

@property (copy, nonatomic) NSString *oldPhoneNumber;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *sharkTicket;
@property (copy, nonatomic) NSString *unusableMobileTicket;
@property (nonatomic) long long type;
@property (nonatomic) long long scene;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
