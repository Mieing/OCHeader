@interface AWEOpenPlatformAuthRouter : NSObject

+ (unsigned long long)flowTypeFromSource:(id)a0;
+ (void)tryJumpSchemaWithAuthInfo:(id)a0 withScene:(long long)a1 isShowedUI:(BOOL)a2;
+ (void)handleTransitionInfo:(id)a0 isExternalWebAuth:(BOOL)a1;
+ (void)handleIMMessageAuthTransitionInfo:(id)a0;

@end
