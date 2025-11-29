@interface IESLiveOpenPlatformDebugValidator : NSObject

+ (BOOL)verifyPermissionWithDebugInfo:(id)a0;
+ (BOOL)_verifyPermissionWithRoomId:(id)a0 appId:(id)a1 develop:(id)a2 sign:(id)a3;
+ (struct __SecKey { } *)pr_addPublicKey:(id)a0;
+ (id)pr_stripPublicKeyHeader:(id)a0;

@end
