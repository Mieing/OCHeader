@class NSString;

@interface BDPBundle : NSObject

@property (retain, nonatomic) NSString *bundleName;

+ (id)packageBundle;
+ (id)gameBundle;
+ (id)customBundle:(id)a0;
+ (id)sharedBundle;
+ (void)registerStaticBundleName:(id)a0;
+ (id)staticBundle;
+ (id)imageBundle;

- (void).cxx_destruct;
- (id)init;

@end
