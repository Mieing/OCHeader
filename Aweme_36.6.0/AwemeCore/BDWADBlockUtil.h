@interface BDWADBlockUtil : NSObject

+ (id)adBlockRuleList;
+ (id)adBlockResourceWithName:(id)a0;
+ (BOOL)precompileEnable;
+ (void)trackADBlockStatus;
+ (id)adBlockDomainWhiteList;
+ (id)precompiledAdblockStore;

@end
