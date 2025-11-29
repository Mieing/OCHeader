@interface AWEFavoriteTabOptimizationABManager : NSObject

+ (BOOL)disableFavoriteLogger;
+ (BOOL)shouldAdjustContentOffsetManually;
+ (BOOL)shouldAutoAdjustContentOffset;
+ (unsigned long long)adjustContentOffsetType;

@end
