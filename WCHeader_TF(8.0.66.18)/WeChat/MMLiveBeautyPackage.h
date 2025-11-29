@class MMLiveBeautySuite, NSArray, NSString, MMLiveBeautyBadgeCollection;

@interface MMLiveBeautyPackage : NSObject

@property (retain, nonatomic) NSArray *suites;
@property (retain, nonatomic) MMLiveBeautySuite *defaultSuite;
@property (retain, nonatomic) NSString *resourcesRootPath;
@property (retain, nonatomic) NSString *opaqueResourcesPath;
@property (retain, nonatomic) MMLiveBeautyBadgeCollection *badges;
@property (retain, nonatomic) MMLiveBeautySuite *activeSuite;

+ (id)beautyPackageInResourcePackage:(id)a0;
+ (id)beautyPackageInLocalDirectory:(id)a0 withConfigurationPath:(id)a1;
+ (id)defaultNoopPackage;
+ (id)defaultSuiteInSuites:(id)a0 byJsonDictionary:(id)a1;

- (void).cxx_destruct;

@end
