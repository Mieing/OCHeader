@interface AWERegionManager : NSObject

+ (id)localRegion;
+ (void)setUpRegionIfNeeded;
+ (BOOL)isRegion:(id)a0;
+ (BOOL)isInRegions:(id)a0;
+ (id)currentRegion;
+ (id)region;

@end
