@class NSArray, NSString, IESEffectModel, NSNumber, AWEComposerBeautyEffectCategoryWrapper;

@interface AWEComposerBeautyEffectWrapper : NSObject

@property (retain, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) NSArray *childEffects;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *resource;
@property (retain, nonatomic) NSString *videoTag;
@property (nonatomic) long long group;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isForD;
@property (nonatomic) BOOL isForT;
@property (nonatomic) BOOL isForM;
@property (nonatomic) BOOL isNone;
@property (nonatomic) BOOL isFilter;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL isSwitch;
@property (nonatomic) float currentRatio;
@property (readonly, nonatomic) double currentIntensity;
@property (retain, nonatomic) NSNumber *makeupType;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *appliedChildEffect;
@property (weak, nonatomic) AWEComposerBeautyEffectWrapper *parentEffect;
@property (weak, nonatomic) AWEComposerBeautyEffectCategoryWrapper *categoryWrapper;
@property (nonatomic) BOOL isLocalEffect;
@property (nonatomic) BOOL isNew;

- (double)defaultRatio;
- (BOOL)isEffectSet;
- (id)nodesWithIntensity:(BOOL)a0;
- (void)setDefaultRatio:(double)a0;
- (BOOL)applied;
- (id)defaultChildEffect;
- (void)updateWithStrength:(double)a0;
- (id)initWithEffect:(id)a0 isFilter:(BOOL)a1;
- (double)defaultSliderValue;
- (BOOL)isInDefaultStatus;
- (double)sliderMaxValue;
- (BOOL)hasChangedEffectSlideValue;
- (id)effectNamesApplied;
- (id)effectValuesApplied;
- (id)tagForAppliedCache;
- (BOOL)isMakeUpForItem:(id)a0;
- (BOOL)hasNewRedDotTag;
- (void)updateRatioWithSliderValue:(double)a0;
- (id)nodes;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEffect:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)downloaded;
- (double)currentSliderValue;
- (double)effectStrength;

@end
