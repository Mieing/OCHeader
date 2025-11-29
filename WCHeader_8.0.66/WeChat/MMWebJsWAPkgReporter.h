@interface MMWebJsWAPkgReporter : NSObject

+ (void)reportReadPkg:(id)a0 version:(long long)a1 pkgType:(unsigned int)a2;
+ (void)reportReadPkg:(id)a0 numberVersion:(long long)a1 pkgType:(unsigned int)a2 strVersion:(id)a3;
+ (void)reportTrigerDownloadPkg:(id)a0;
+ (void)reportDownloadCallback:(id)a0 numberVersion:(long long)a1 strVersion:(id)a2 ret:(unsigned int)a3;
+ (void)reportCommenError:(id)a0 ret:(unsigned int)a1;

@end
