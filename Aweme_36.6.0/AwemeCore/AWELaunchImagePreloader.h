@class NSCache, NSMutableArray, NSString;

@interface AWELaunchImagePreloader : NSObject <AWEBundleImagePreloader>

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSMutableArray *imageInfo;
@property (retain, nonatomic) NSMutableArray *emptyImageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fluencySlardarIssueOptConfig;
+ (id)imagePreloadConfig;
+ (BOOL)imAvataDefaultImgOptEnable;
+ (id)sharedInstance;

- (void)handleMemoryWarning:(id)a0;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)unusedImageInfoUpload;
- (void)unusedImageInfoRecord;
- (void)usedImageInfoUpload;
- (id)awe_preloadedImageNamed:(id)a0 inSearchBundleName:(id)a1 compatibleWithTraitCollection:(id)a2;
- (void)preloadImage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
