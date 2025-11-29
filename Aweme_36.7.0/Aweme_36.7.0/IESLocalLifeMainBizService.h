@class NSString;

@interface IESLocalLifeMainBizService : HTSService <IESLocalLifeMainBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAuditingVersion;
+ (id)couponStatusEventStringOf:(id)a0;
+ (void)activeVideoStatusRegister;
+ (void)broadcastWithParams:(id)a0;
+ (BOOL)openSchemaWithParams:(id)a0;
+ (BOOL)shouldBizDowngradeWithKey:(id)a0;
+ (id)enterpriseUserInfoJson;
+ (id)sendLogV1:(id)a0;
+ (BOOL)preloadIronManWithParams:(id)a0;
+ (BOOL)isAlreadyShowAlertInModernFeed;
+ (void)checkModernFeedAlertStatus;
+ (id)bizDowngradeAbNumberForKey:(id)a0;
+ (id)microAppEntranceMarkJsbHybridSchema:(id)a0 aPIContext:(id)a1 pageContext:(id)a2;
+ (id)sendLogV3:(id)a0 host:(id)a1;
+ (id)userInfo;


@end
