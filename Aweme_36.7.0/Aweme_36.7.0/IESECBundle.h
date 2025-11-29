@class NSString, NSBundle, NSMutableDictionary;

@interface IESECBundle : NSObject

@property (class, readonly) IESECBundle *ecBundle;

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSBundle *localBundle;
@property (retain, nonatomic) IESECBundle *parent;
@property (retain, nonatomic) NSMutableDictionary *assetManagers;

+ (id)bundleWithIdentifier:(id)a0;

- (id)objectForKey:(id)a0 type:(id)a1;
- (id)colorWithARGBString:(id)a0;
- (void)color_loadManager;
- (void)addAssetManager:(Class)a0 type:(id)a1;
- (id /* block */)colorInTheme;
- (void)corner_loadManager;
- (void)file_loadManager;
- (long long)failTypeWithGeckoResourceStatus:(long long)a0;
- (id)filePathCache;
- (void)setFilePathCache:(id)a0;
- (id /* block */)asyncData;
- (id /* block */)asyncFilePath;
- (void)font_loadManager;
- (void)image_loadManager;
- (id)localList;
- (void)setLocalList:(id)a0;
- (id /* block */)asyncImage;
- (void)value_loadManager;
- (id /* block */)filePath;
- (id /* block */)colors;
- (void).cxx_destruct;
- (id /* block */)value;
- (id /* block */)font;
- (id /* block */)cornerRadius;
- (id /* block */)image;
- (id)dataCache;
- (id /* block */)data;
- (id /* block */)localImage;
- (void)setDataCache:(id)a0;

@end
