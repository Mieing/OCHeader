@interface AWEIMShareVideoTracker : NSObject

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEFeedShareObtainGoldDOUYINLiteAdapterClass;
+ (void)trackShareMsgWithContext:(id)a0 text:(id)a1 shareList:(id)a2;
+ (void)trackEvent:(id)a0 shareVSModel:(id)a1 params:(id)a2 shareList:(id)a3;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (BOOL)shouldTrackShareMsgWithContext:(id)a0;
+ (void)trackShareMsgSuccessWithContext:(id)a0 message:(id)a1;

- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEFeedShareObtainGoldDOUYINLiteAdapter;
- (id)aAWEUGKitModuleDOUYINAdapter;

@end
