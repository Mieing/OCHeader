@class NSString;

@interface AppleIDAuthorizationWrap : NSObject

@property (nonatomic) BOOL isAppleIDBound;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *appleRegisterTicket;

- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
