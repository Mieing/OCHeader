@interface AWEBDPRankDataRequest : NSObject

+ (void)fetchRankDataWithModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)setRankDataWithModel:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (id)getRequestParamWithUniqueID:(id)a0 type:(unsigned long long)a1 model:(id)a2;
+ (id)getQueryWithUniqueID:(id)a0 type:(unsigned long long)a1 model:(id)a2;
+ (void)fetchRankDataWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)setRankDataWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;

@end
