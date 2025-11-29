@class NSString, NSDate;

@interface WBAuthorizeResponse : WBBaseResponse

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *accessToken;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *refreshToken;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (id)validate;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
