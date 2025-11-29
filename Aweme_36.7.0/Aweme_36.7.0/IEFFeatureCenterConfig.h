@class IESCombineFeatureConfig, IESFeatureConfig;

@interface IEFFeatureCenterConfig : NSObject

@property (retain, nonatomic) IESFeatureConfig *playFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *phoneFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *portraitFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *seqPlayFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *sessionFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *ADPlayFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *feedFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *appExitFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *userFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *followFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *relatedFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *userPageFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *commentConfig;
@property (retain, nonatomic) IESFeatureConfig *finishPlayConfig;
@property (retain, nonatomic) IESFeatureConfig *pitayaConfig;
@property (retain, nonatomic) IESFeatureConfig *sensorConfig;
@property (retain, nonatomic) IESCombineFeatureConfig *combineFeatureConfig;
@property (retain, nonatomic) IESFeatureConfig *eCommerceConfig;
@property (retain, nonatomic) IESFeatureConfig *RPBFeatureConfig;

- (id)initWithJSONDict:(id)a0 nextRealCnt:(long long)a1 isReal:(BOOL)a2 enableCloudScore:(BOOL)a3;
- (id)initWithJSONDict:(id)a0 nextRealCnt:(long long)a1 isReal:(BOOL)a2;
- (id)buildFeatureConfig:(id)a0 isReal:(BOOL)a1 nextRealCnt:(int)a2 enableCloudScore:(BOOL)a3;
- (void).cxx_destruct;

@end
