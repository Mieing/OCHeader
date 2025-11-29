@class NSString, NSMutableDictionary;

@interface IESECPDPPreloadManager : NSObject <IESECPDPPreloadService>

@property (retain, nonatomic) NSMutableDictionary *abTestConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload;
+ (BOOL)getABTestForEnumKey:(unsigned long long)a0;
+ (void)startPreloadMTLModel;
+ (void)p_preheatProperty;
+ (void)preloadPropertyKeys:(Class)a0;
+ (id)shared;

- (void)p_prepareABTest;
- (void)p_preconnectHost;
- (BOOL)getPrepareABTestForEnumKey:(unsigned long long)a0;
- (id)p_getEnumStringWithEnumKey:(unsigned long long)a0;
- (BOOL)p_getABTestWithEnumKey:(unsigned long long)a0;
- (void).cxx_destruct;

@end
