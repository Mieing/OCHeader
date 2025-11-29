@class NSString, NSData, JSAPIAuthInfo, JSScopeAuthInfo;

@interface JSAPIAuthWrap : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *apiName;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *nouce;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSData *apiArgs;
@property (retain, nonatomic) NSString *signatureMethod;
@property (nonatomic) long long signatureType;
@property (retain, nonatomic) JSAPIAuthInfo *authInfo;
@property (retain, nonatomic) JSScopeAuthInfo *scopeAuthInfo;

- (void).cxx_destruct;

@end
