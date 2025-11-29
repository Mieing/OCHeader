@interface PasskeyUtils : NSObject

+ (id)getPasskeyUrl;
+ (BOOL)isPasskeyIOSEnabled;
+ (BOOL)isPasskeyEnabled;
+ (BOOL)isPasskeySupportedBundle;
+ (BOOL)checkUnavailableWithShowTips:(BOOL)a0;
+ (BOOL)canAutoShowPasskeyLogin;
+ (void)markHasAutoShowPasskeyLogin;

@end
