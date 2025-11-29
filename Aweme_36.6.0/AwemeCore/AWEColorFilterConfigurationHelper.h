@class NSMutableDictionary;

@interface AWEColorFilterConfigurationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *ratioMapForBeautifyItems;
@property (nonatomic) unsigned long long filterConfigurationType;

+ (id)getColorFilterInputRationKeyWithPublishModel:(id)a0;
+ (id)configurationKeyWithType:(unsigned long long)a0;
+ (id)combineColorFilterRatioDicKey:(id)a0 inputRationKey:(id)a1;

- (BOOL)hasIndensityRatioForColorEffect:(id)a0;
- (float)getEffectIndensityRatioWithDefaultIndensity:(float)a0 applyedIndensity:(float)a1;
- (BOOL)hasIndensityRatioForColorEffect:(id)a0 publishModel:(id)a1;
- (float)indensityRatioForColorEffect:(id)a0 publishModel:(id)a1;
- (float)getEffectIndensityWithDefaultIndensity:(float)a0 Ratio:(float)a1;
- (void)setIndensityRatioForColorEffect:(id)a0 ratio:(float)a1;
- (float)indensityRatioForColorEffect:(id)a0;
- (BOOL)hasIndensityRatioForColorEffect:(id)a0 inputRatioKey:(id)a1;
- (float)indensityRatioForColorEffect:(id)a0 inputRatioKey:(id)a1;
- (void)updateIndensityRatioForColorEffect:(id)a0 publishModel:(id)a1 ratioKey:(id)a2;
- (void)setIndensityRatioForColorEffect:(id)a0 inputRatioKey:(id)a1 ratio:(float)a2;
- (void)setIndensityRatioForColorEffect:(id)a0 publishModel:(id)a1 ratio:(float)a2;
- (id)initWithBeautyConfiguration:(unsigned long long)a0;
- (void).cxx_destruct;

@end
