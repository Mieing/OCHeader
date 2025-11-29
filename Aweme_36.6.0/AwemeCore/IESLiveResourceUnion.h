@interface IESLiveResourceUnion : NSObject

+ (id)liveBundle;
+ (BOOL)isPreferCloudEnabled;
+ (void)addPatchWithBundleName:(id)a0;
+ (void)removePatchWithBundleName:(id)a0;

@end
