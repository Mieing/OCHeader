@interface PGLNetworkEnvironment : NSObject

+ (BOOL)isUsingVPN;
+ (id)getProxyIPAndPort;
+ (id)fetchNetworkEnvironment;

@end
