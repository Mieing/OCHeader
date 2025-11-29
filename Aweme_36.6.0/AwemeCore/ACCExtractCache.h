@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCExtractCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *frameMap;
@property (retain, nonatomic) NSMutableDictionary *packageMap;
@property (retain, nonatomic) NSMutableDictionary *featureMap;
@property (retain, nonatomic) NSMutableDictionary *bizMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)updateResult:(id)a0 forBizId:(id)a1;
- (id)getResultByBizId:(id)a0 period:(unsigned long long)a1;
- (id)getFeatureResultByMaterialId:(id)a0;
- (void)removeResultForBizId:(id)a0;
- (id)materialIDsBySource:(unsigned long long)a0;
- (void)clearMaterialCache:(id)a0;
- (id)getFeatureItemByResultId:(id)a0;
- (void)runThreadSafeRead:(id /* block */)a0;
- (void)runThreadSafeWrite:(id /* block */)a0;
- (id)getFrameItemByResultId:(id)a0;
- (id)getPackageItemByResultId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
