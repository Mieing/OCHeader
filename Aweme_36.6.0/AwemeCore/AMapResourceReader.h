@class NSCache, NSMutableDictionary;

@interface AMapResourceReader : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundles;
@property (retain, nonatomic) NSCache *imageCache;

+ (id)publicKeyString;
+ (id)httpsCertificateString;
+ (id)sigPublicKeyString;
+ (id)mapLogoString;
+ (id)embeddedImageWithSourceString:(id)a0;
+ (id)HUDLogoString;
+ (id)sharedResourceReader;
+ (id)httpsCertificateData;
+ (id)sigPublicKeyData;
+ (id)mapLogoImage;
+ (id)HUDLogoImage;
+ (id)publicKeyData;

- (id)bundleWithName:(id)a0;
- (id)registerBundleWithPath:(id)a0 bundleName:(id)a1;
- (void)bundleInvalidNotification:(id)a0;
- (id)imageNamed:(id)a0 type:(id)a1 inBundle:(id)a2;
- (void).cxx_destruct;
- (id)imageNamed:(id)a0 inBundle:(id)a1;

@end
