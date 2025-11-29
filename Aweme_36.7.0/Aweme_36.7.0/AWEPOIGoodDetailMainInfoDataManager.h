@interface AWEPOIGoodDetailMainInfoDataManager : NSObject

+ (void)fetchMainInfoWithParams:(id)a0 headers:(id)a1 optionalPath:(id)a2 completion:(id /* block */)a3;
+ (void)fetchPrefetchImageWithParams:(id)a0 headers:(id)a1 optionalPath:(id)a2 completion:(id /* block */)a3;
+ (void)fetchGoodDecisionUpdateWithParams:(id)a0 headers:(id)a1 completion:(id /* block */)a2;
+ (void)fetchBizCodeWithParams:(id)a0 headers:(id)a1 completion:(id /* block */)a2;
+ (void)processModel:(id)a0 error:(id)a1 completion:(id /* block */)a2;
+ (id)getServerTimingInner:(id)a0;

@end
