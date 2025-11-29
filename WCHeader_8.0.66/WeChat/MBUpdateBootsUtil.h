@interface MBUpdateBootsUtil : NSObject

+ (id)getRelatePkgRootPath:(id)a0;
+ (id)getRelateZipPath:(id)a0 patchId:(id)a1;
+ (id)getRelatePkgPath:(id)a0 patchId:(id)a1;
+ (id)getRelateWxaPath:(id)a0 patchId:(id)a1 unzipPath:(id)a2;
+ (id)getOriginalRelateWxaPath:(id)a0 originalName:(id)a1;
+ (id)getDirOfMBBootsUpdate;
+ (id)getMagicPkgRoot:(id)a0;
+ (id)getMagicPkgTempRoot:(id)a0;
+ (id)getMagicZipPath:(id)a0 patchId:(id)a1;
+ (id)getMagicOriginalPkgPath:(id)a0 originalName:(id)a1;
+ (id)getMagicPkgPath:(id)a0 patchId:(id)a1;
+ (id)getWxaPkgName:(id)a0;
+ (id)readPkgPathFromUnZipPath:(id)a0;
+ (id)getBaseWxaPkgPath:(id)a0;
+ (BOOL)pkgFileExist:(id)a0;
+ (id)getMagicPkgList;
+ (id)getMagicPkgInfo:(id)a0;
+ (void)removeMagicPkgInfo:(id)a0;
+ (id)getMagicPkgConfigList;
+ (void)report27831:(id)a0 pkgInfo:(id)a1 fileExist:(long long)a2 scene:(long long)a3 state:(long long)a4 errCode:(long long)a5;

@end
