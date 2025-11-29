@class NSHashTable, AWEAwemeModel;

@interface AWELivePreStreamStrategyController : NSObject

@property (weak, nonatomic) AWEAwemeModel *preBindModel;
@property (nonatomic) BOOL enableIgnoreSameModel;
@property (retain, nonatomic) NSHashTable *weakContainer;

+ (id)sharedInstance;

- (void)collectPreviewSearchStrategyInfo:(id)a0;
- (id)encodeStrategyInfo:(id)a0;
- (BOOL)isEcomCart:(id)a0;
- (void)collectPreviewStrategyInfo:(id)a0;
- (void)collectStrategyFeatures:(id)a0;
- (void)addRealTimeFeature:(id)a0 liveRoom:(id)a1;
- (unsigned long long)preStreamOrientation:(id)a0;
- (id)encodePreviewStrategyInfo:(id)a0;
- (id)defaultFeatures;
- (void)addItemExplicitInfo:(id)a0 liveRoom:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
