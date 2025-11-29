@class NSString;

@interface TTASNSSDKAuthSwitchBindReqModel : NSObject

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *authTokenSecret;
@property (nonatomic) long long expireIn;
@property (copy, nonatomic) NSString *openid;
@property (nonatomic) long long platformType;
@property (nonatomic) BOOL chanageBind;

- (void).cxx_destruct;

@end
