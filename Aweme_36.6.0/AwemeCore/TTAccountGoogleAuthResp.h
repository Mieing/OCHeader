@class NSString;

@interface TTAccountGoogleAuthResp : TTAccountAuthResponse

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *accessTokenSecret;
@property (copy, nonatomic) NSString *expirationTime;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *state;

- (void).cxx_destruct;

@end
