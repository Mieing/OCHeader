@class NSArray, BDPPackageInfo, NSString;

@interface BDPODRXDepAnalyzer : NSObject <BDPBootLifeCycleMessage>

@property (copy, nonatomic) NSArray *pkgInfos;
@property (retain, nonatomic) BDPPackageInfo *mainPkgInfo;
@property (copy) NSArray *lynxPageList;
@property (readonly, copy, nonatomic) NSArray *pluginInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchedPkgForPagePath:(id)a0 withPkgInfos:(id)a1 lynxPages:(id)a2;
+ (id)dependedPkgsForPagePath:(id)a0 withPkgInfos:(id)a1 pluginInfos:(id)a2 lynxPages:(id)a3;
+ (id)dependedPkgsForPagePath:(id)a0 withPkgInfos:(id)a1 lynxPages:(id)a2;
+ (id)dependedPkgsForPagePath:(id)a0 withPkgInfos:(id)a1;
+ (id)addPkgPrefixIfNeededForPath:(id)a0 withPkgInfo:(id)a1;
+ (id)subpackageTypeForPagePath:(id)a0 withPkgInfos:(id)a1 pluginInfos:(id)a2;
+ (id)subpackageTypeForPagePath:(id)a0 withPkgInfos:(id)a1;
+ (id)dependedPkgsForPagePath:(id)a0 withPkgInfos:(id)a1 pluginInfos:(id)a2;
+ (BOOL)isLynxPageWithPath:(id)a0 lynxPathList:(id)a1;
+ (id)matchedPkgForPagePath:(id)a0 withPkgInfos:(id)a1;
+ (BOOL)resetForceWeb;

- (void)applicationReadyToRedirectToWebViewWithUniqueID:(id)a0 routeID:(id)a1;
- (id)initWithPackageInfos:(id)a0 pluginInfos:(id)a1 lynxPages:(id)a2;
- (void)updateLynxPageList:(id)a0;
- (id)matchedPkgForPath:(id)a0;
- (id)dependedPkgsForPath:(id)a0;
- (id)matchedPkgForPath:(id)a0 defaultMainPkg:(BOOL)a1;
- (id)p_sortedPkgsWithPkgInfos:(id)a0;
- (id)initWithPackageInfos:(id)a0;
- (void)updatePkgInfos:(id)a0;
- (id)allPkgs;
- (void).cxx_destruct;

@end
