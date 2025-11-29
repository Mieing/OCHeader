@interface HLSProxyModule : NSObject

+ (void *)getHlsProxyProtocol;
+ (BOOL)isM3u8:(id)a0;
+ (void)setProxyUrlGenerator:(long long)a0;
+ (id)generateHLSProxyQueryExpiretimes:(id)a0;

@end
