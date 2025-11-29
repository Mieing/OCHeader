@class NSString, NSMutableArray, CJPayLocalCacheManager;

@interface CJPayFeatureCollectorManager : NSObject <CJPayFeatureRecord>

@property (retain, nonatomic) NSMutableArray *collectors;
@property (retain, nonatomic) CJPayLocalCacheManager *manager;
@property (retain, nonatomic) NSMutableArray *contextStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterScene:(id)a0;
- (void)leaveScene:(id)a0;
- (void)recordFeature:(id)a0;
- (id)allFeaturesFor:(id)a0 conditionBlock:(id /* block */)a1;
- (void)startFeaturesCollect;
- (void)stopFeaturesCollect;
- (id)buildFeaturesParamsWithBusinessID:(id)a0;
- (void)registerCollector:(id)a0;
- (id)buildFeaturesParamsWithScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)getContext;

@end
