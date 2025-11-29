@interface BDRuleEngineSettings : NSObject

+ (BOOL)enableLockParameterRegistry;
+ (BOOL)enablePrecacheCel;
+ (BOOL)enableInstructionList;
+ (BOOL)enableOptimizeKVStore;
+ (BOOL)enableRuleEngine;
+ (id)spaceConfigForSource:(id)a0;
+ (BOOL)enableBlackWhite;
+ (BOOL)enableQuickExecutor;
+ (BOOL)enableOperatorCompareFix;
+ (BOOL)enableFFFTrie;
+ (unsigned long long)localLogLevel;
+ (id)globalSampleRate;
+ (BOOL)enableAppLog;
+ (id)spaceConfig;
+ (unsigned long long)expressionCacheSize;
+ (id)config;
+ (id)setting;

@end
