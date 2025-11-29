@class NSString;

@interface AWEOpenPlatformAuthProcessTemplateDelegate : NSObject <AWEOpenPlatformAuthProcessPotocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fillExtraOAuthParamsForAuthProcess:(id)a0 commonParams:(id)a1;
+ (BOOL)customCheckEntranceModelForAuthProcess:(id)a0;
+ (void)customConfigAuthProvider:(id)a0 entranceModel:(id)a1 params:(id)a2;


@end
