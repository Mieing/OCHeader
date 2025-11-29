@interface ACCAEBottomMenuHelper : NSObject

+ (BOOL)shouldShowMenuNewFeature:(long long)a0;
+ (void)markMenuNewFeatureShowed:(long long)a0;
+ (id)latestNewFeatureBarComponentTypes;
+ (id)menuStorageKey:(long long)a0;
+ (id)newFeatureBarComponentTypes;
+ (id)latestNewFeature;
+ (id)findLatestNewFeature;
+ (id)newFeatureArray;
+ (BOOL)ifAvailableForFeature:(id)a0;

@end
