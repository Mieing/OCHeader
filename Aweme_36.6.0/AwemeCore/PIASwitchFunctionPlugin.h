@class NSMutableDictionary, YYMemoryCache, PIAMMKVStorage, NSMutableSet;

@interface PIASwitchFunctionPlugin : NSObject <PIAFetchSettingsProtocol>

@property (class, readonly, nonatomic) PIAMMKVStorage *switchStorage;
@property (class, readonly, nonatomic) NSMutableSet *urlAllowList;
@property (class, readonly, nonatomic) NSMutableDictionary *functionMap;
@property (class, readonly, nonatomic) YYMemoryCache *urlCache;

+ (void)executeAfterPrepareTask;
+ (BOOL)disablePIA;
+ (BOOL)checkURLMatchPIA:(id)a0;
+ (BOOL)getBaseSwitchValueForKey:(id)a0;
+ (void)fetchSetting:(id)a0;
+ (BOOL)isFunctionCanBeUsed:(id)a0 URL:(id)a1 scene:(id)a2;
+ (void)injectSettingBridgeWithContext:(id)a0 instance:(id)a1;
+ (id)switchKey:(id)a0 type:(unsigned long long)a1;
+ (BOOL)isURLInAllowDomainList:(id)a0;
+ (BOOL)isURLEnabled:(id)a0 function:(id)a1 scene:(id)a2;
+ (id)tryFetchSettingsKeyIfNeed:(id)a0;
+ (void)p_setFunctionKey;
+ (BOOL)ifPageURLExist:(id)a0;
+ (BOOL)checkURLInBlockList:(id)a0;
+ (BOOL)checkFunctionEnable:(id)a0 ForURL:(id)a1 originURL:(id)a2;
+ (void)registerFunctionDefaultSwitch:(id)a0 enabled:(BOOL)a1 type:(unsigned long long)a2;
+ (BOOL)isFunctionCanBeUsed:(id)a0 URL:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
+ (id)getPageConfigForKey:(id)a0;
+ (void)initialize;

@end
