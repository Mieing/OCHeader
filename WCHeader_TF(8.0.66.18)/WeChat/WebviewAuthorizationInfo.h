@class NSString;

@interface WebviewAuthorizationInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *api;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *signatureMethod;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *nonce;

- (void).cxx_destruct;

@end
