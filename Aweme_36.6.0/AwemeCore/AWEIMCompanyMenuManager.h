@interface AWEIMCompanyMenuManager : NSObject

+ (void)fetchMenuForCompanyUser:(id)a0 completion:(id /* block */)a1;
+ (id)cachedResultFor:(id)a0;
+ (void)saveResult:(id)a0 for:(id)a1;
+ (void)fetchMenuFromRequestForCompanyUser:(id)a0 completion:(id /* block */)a1;
+ (id)cacheKeyForCompany:(id)a0;
+ (id)memoryCache;

@end
