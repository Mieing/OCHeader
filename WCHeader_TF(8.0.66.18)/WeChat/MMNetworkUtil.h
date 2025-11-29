@interface MMNetworkUtil : NSObject

+ (id)getInterfaceFromSocketAddr:(const void *)a0;
+ (id)getIPFromSocketAddr:(const void *)a0;
+ (unsigned int)getPortFromSocketAddr:(const void *)a0;
+ (BOOL)isInternetwork:(const void *)a0;
+ (BOOL)isIPAddress:(const void *)a0 equalTo:(const void *)a1;
+ (BOOL)isLocalhost:(const void *)a0;
+ (id)deviceNetworkStatistics;

@end
