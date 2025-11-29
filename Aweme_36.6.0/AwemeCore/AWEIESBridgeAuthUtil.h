@interface AWEIESBridgeAuthUtil : NSObject

+ (id)authDomain;
+ (void)registerAuthConfigFromGeckoBuilder:(id)a0 deviceId:(id)a1 delay:(long long)a2 extraChannels:(id)a3 builtinAuthInfosEnabled:(BOOL)a4;
+ (void)triggerFetchBDXBridgeAuthConfig;
+ (BOOL)enableRunInFeedready;
+ (BOOL)shouldDelay;

@end
