@class NSString;

@interface AWEJumpCheckInterceptor : NSObject <AWERequestInterceptorProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstJumpWhitelistApps;
+ (void)checkRequest:(id)a0 isClickJump:(BOOL)a1 model:(id)a2 adInfo:(id)a3 error:(id *)a4;
+ (void)checkRequest:(id)a0 isClickJump:(BOOL)a1 model:(id)a2 error:(id *)a3;
+ (void)checkRequest:(id)a0 isClickJump:(BOOL)a1 hasInteraction:(BOOL)a2 model:(id)a3 adInfo:(id)a4 error:(id *)a5;
+ (BOOL)isAllowUserClickJump:(id)a0;
+ (BOOL)isSplashFirstJumpAllowListWithURL:(id)a0;
+ (BOOL)isWhiteListUrl:(id)a0 containsInteractionJumpList:(BOOL)a1;
+ (id)normalSchemes;
+ (id)secondJumpWhitelistApps;
+ (BOOL)isWhiteListUniversalLink:(id)a0;


@end
