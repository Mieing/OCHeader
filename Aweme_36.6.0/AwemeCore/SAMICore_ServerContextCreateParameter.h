@interface SAMICore_ServerContextCreateParameter : NSObject

@property (nonatomic) const char *url;
@property (nonatomic) const char *appKey;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long timeStamp;
@property (nonatomic) const char *envType;
@property (nonatomic) const char *env;

@end
