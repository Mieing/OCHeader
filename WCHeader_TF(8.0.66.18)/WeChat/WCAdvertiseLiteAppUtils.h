@interface WCAdvertiseLiteAppUtils : NSObject

+ (BOOL)isLiteAppValid:(id)a0;
+ (void)checkAdLiteAppPackageUpdate:(id)a0;
+ (void)checkAdLiteAppPackageUpdate:(id)a0 forceUpdate:(BOOL)a1;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNormal;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNoPkg;
+ (BOOL)jumpLiteApp:(id)a0 page:(id)a1 query:(id)a2;
+ (id)createLiteAppViewController:(id)a0 page:(id)a1 query:(id)a2;
+ (void)asyncCreateLiteAppViewController:(id)a0 completeBlock:(id /* block */)a1;
+ (BOOL)checkAdLiteAppABTestOn:(id)a0;
+ (void)reportIdKey:(id)a0 reportStep:(unsigned int)a1;
+ (id)getLiteAppPackageVersion:(id)a0;

@end
