@interface AWESearchTabTypeMap : NSObject

+ (id)fetchTabStrWithTabNum:(long long)a0;
+ (id)fetchTabTypeWithTabString:(id)a0;
+ (id)dynamicTabStrCache;
+ (id)dynamicTabNumCache;
+ (id)dynamicTabNameCache;
+ (id)fetchTabNameWithTabStr:(id)a0;
+ (void)addDynamicTabStrCacheWithStr:(id)a0 andNum:(id)a1;
+ (void)addDynamicTabNumCacheWithType:(id)a0 andTabStr:(id)a1;
+ (void)addDynamicTabNameCacheWithStr:(id)a0 andTabStr:(id)a1;

@end
