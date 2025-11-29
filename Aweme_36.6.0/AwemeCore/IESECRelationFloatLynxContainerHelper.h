@interface IESECRelationFloatLynxContainerHelper : NSObject

+ (BOOL)shouldShowContainer:(id)a0 withRules:(id)a1;
+ (void)didShowContainer:(id)a0 withRules:(id)a1;
+ (void)didUserCloseContainer:(id)a0 withRules:(id)a1;
+ (void)__updateHistory:(id)a0 forRule:(id)a1 forTimestamp:(id)a2;
+ (id)__cacheKey:(id)a0 withRule:(id)a1;

@end
