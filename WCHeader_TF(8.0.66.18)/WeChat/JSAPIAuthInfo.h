@class NSString;

@interface JSAPIAuthInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *jsapiName;
@property (nonatomic) unsigned int authStatus;
@property (retain, nonatomic) NSString *authDesc;
@property (retain, nonatomic) NSString *authSubDesc;

+ (void)initialize;

@end
