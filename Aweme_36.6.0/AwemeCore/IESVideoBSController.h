@class NSLock, NSArray, IESVideoBSAutoBitrateModel;
@protocol IESVideoBSConfigModelProtocol, IESVideoBSControllerDelegate;

@interface IESVideoBSController : NSObject

@property (retain, nonatomic) NSLock *safeRWLock;
@property (nonatomic) BOOL safeRWLockEnale;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSArray *configArray;
@property (copy, nonatomic) NSArray *groupArray;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) id<IESVideoBSConfigModelProtocol> currentConfig;
@property (retain, nonatomic) NSArray *bandWidthMap;
@property (retain, nonatomic) IESVideoBSAutoBitrateModel *autoBitrateModel;
@property (weak, nonatomic) id<IESVideoBSControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ hasEnoughCacheForModel;

+ (long long)networkSpeed;
+ (id)getTargetNetworkWithAutoBitrateModel:(id)a0 currentConfig:(id)a1 networkSpeedInbps:(long long)a2;
+ (id)getTargetNetworkWithBandWidthMap:(id)a0 currentConfig:(id)a1 networkSpeedInbps:(long long)a2;
+ (id)getTargetNetworkWithConfigArray:(id)a0 currentConfig:(id)a1 networkSpeed:(long long)a2;
+ (void)storeNetworkSpeed:(long long)a0;
+ (long long)getStoredNetworkSpeed;
+ (void)enableStoreNetworkSpeed:(BOOL)a0;
+ (void)setOnFirstInitCallback:(id /* block */)a0;
+ (id)sharedInstance;

- (void)firstSelectionCallback;
- (id)_modelForCurrentNetworkWithModels:(id)a0 trategyType:(long long *)a1;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2 bandwidthFactor:(double)a3;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2 autoBitrateModel:(id)a3 bandwidthFactor:(double)a4;
- (BOOL)filterModelsWithDefaultBitrateAndBitrateRange;
- (id)_defaultBitrateModelForCurrentGroupWithModels:(id)a0;
- (id)_defaultModelForCurrentGroupWithModels:(id)a0;
- (id)__modelForCurrentNetworkWithModels:(id)a0 trategyType:(long long *)a1;
- (id)_modelsBitrateRangeForCurrentGroupWithModels:(id)a0;
- (id)_modelsForCurrentGroupWithModels:(id)a0;
- (id)_currentGroupConfigList;
- (id)_currentGroupBitrateRange;
- (id)_currentGroupDefaultConfig;
- (id)_currentGroupDefaultBitrate;
- (id)selectModelWithModels:(id)a0 trategyType:(long long *)a1;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 bandwidthFactor:(double)a2;
- (id)selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2 autoBitrateModel:(id)a3;
- (id)selectDefaultModelWithModels:(id)a0;
- (id)_defaultQualityForCurrentGroupWithModels:(id)a0;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 autoBitrateModel:(id)a2;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 autoBitrateModel:(id)a2 bandwidthFactor:(double)a3;
- (void)awe_setHasEnoughCacheForModel:(id /* block */)a0;
- (id)awe_selectModelWithModels:(id)a0 trategyType:(long long *)a1;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2 bandwidthFactor:(double)a3;
- (id)awe_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 bandwidthFactor:(double)a2;
- (void)bdx_setHasEnoughCacheForModel:(id /* block */)a0;
- (id)bdx_selectModelWithModels:(id)a0 trategyType:(long long *)a1;
- (id)bdx_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1;
- (id)bdx_selectModelAndUpdateConfigWithModels:(id)a0 duration:(double)a1 trategyType:(long long *)a2;
- (void).cxx_destruct;
- (id)init;

@end
