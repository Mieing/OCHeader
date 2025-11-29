@interface AMapURLSearch : NSObject

+ (BOOL)canOpenAMAPScheme;
+ (id)encodedStringWithValue:(id)a0;
+ (BOOL)openAMapNavigation:(id)a0;
+ (BOOL)openAMapRouteSearch:(id)a0;
+ (BOOL)openAMapPOISearch:(id)a0;
+ (void)getLatestAMapApp;
+ (id)applicationScheme;
+ (id)applicationName;

@end
