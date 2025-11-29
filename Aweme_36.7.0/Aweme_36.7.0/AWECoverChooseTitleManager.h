@interface AWECoverChooseTitleManager : NSObject

+ (void)fetchTitlesWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)keyWithModel:(id)a0;
+ (void)fetchCompleteWithModel:(id)a0 result:(id)a1 error:(id)a2 completion:(id /* block */)a3;
+ (void)trackEndWithError:(id)a0;
+ (id)cacheKey;
+ (void)trackStart;

@end
