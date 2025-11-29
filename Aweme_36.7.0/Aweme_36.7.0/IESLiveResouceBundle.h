@class NSString, NSBundle, NSDictionary;

@interface IESLiveResouceBundle : NSObject

@property (retain, nonatomic) IESLiveResouceBundle *parent;
@property (copy, nonatomic) NSString *bundleName;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) BOOL isImageFromAssets;
@property (copy, nonatomic) NSDictionary *assetManagers;

+ (id)hookersForCategory:(id)a0;
+ (void)addPreHook:(id /* block */)a0 forCategory:(id)a1;
+ (void)addPostHook:(id /* block */)a0 forCategory:(id)a1;
+ (void)removeHooker:(id)a0 forCategory:(id)a1;
+ (void)removeAllHookersForCategory:(id)a0;
+ (id)loadAssetBundleWithCategory:(id)a0;
+ (id)assetBundleWithBundleName:(id)a0;
+ (id)assetBundleNameWithDynamicKey:(id)a0;
+ (void)setEnableFileCache:(BOOL)a0;
+ (BOOL)enableFileCache;
+ (id)assetBundleNameWithCategory:(id)a0;
+ (void)useBundle:(id)a0 forCategory:(id)a1;
+ (void)useBundleName:(id)a0 forDynamicKey:(id)a1;
+ (id)assetBundleWithCategory:(id)a0;
+ (void)addHooker:(id)a0 forCategory:(id)a1;
+ (void)applyAdjunct:(id)a0 forCategory:(id)a1;
+ (id)loadBundleNamesWithCategory:(id)a0;
+ (void)switchToBundle:(id)a0 forCategory:(id)a1;
+ (void)load;

- (id /* block */)alphaColor;
- (id)hook_objectForKey:(id)a0 type:(id)a1;
- (id)hookers;
- (id /* block */)preHookers;
- (id /* block */)postHookers;
- (void)setHookers:(id)a0;
- (void)addPreHook:(id /* block */)a0;
- (void)addPostHook:(id /* block */)a0;
- (void)removeHooker:(id)a0;
- (void)removeAllHookers;
- (id /* block */)is;
- (id /* block */)pageNoQuery;
- (id /* block */)fstring;
- (id /* block */)astring;
- (id /* block */)afstring;
- (id /* block */)infoDic;
- (id)objectForKey:(id)a0 type:(id)a1;
- (void)addHooker:(id)a0;
- (void)applyAdjunct:(id)a0;
- (id /* block */)afilePath;
- (id /* block */)filePathInfolder;
- (id /* block */)colorTemplate;
- (id /* block */)colorTemplate;
- (id /* block */)colorTemplate;
- (id /* block */)filePath;
- (id /* block */)config;
- (void).cxx_destruct;
- (id /* block */)page;
- (id)initWithBundle:(id)a0;
- (id /* block */)value;
- (id /* block */)string;
- (id /* block */)colorName;
- (id /* block */)bundlePath;
- (id /* block */)color;
- (id /* block */)image;
- (id)initWithBundlePath:(id)a0;
- (id /* block */)style;
- (id)initWithBundleName:(id)a0;

@end
