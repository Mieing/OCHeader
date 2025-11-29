@interface DPCore : NSObject

+ (BOOL)initWithAppkey:(id)a0 environment:(int)a1 authCode:(id)a2 resultHandler:(id /* block */)a3;
+ (id)getSecurityToken:(int)a0 envIsValid:(BOOL)a1;
+ (void)resetClientData:(int)a0;
+ (void)setOnlineHost:(id)a0;
+ (int)getEnvironment:(int)a0;
+ (id)getSDKVersion;
+ (id)sharedInstance;
+ (void)setEnvironment:(int)a0;

@end
