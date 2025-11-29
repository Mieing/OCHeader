@class NSMutableArray, NSArray, NSNumber, IESVideoBitrateCurveSwitchModel;

@interface IESVideoBitratePreSelectorCenter : NSObject

@property (retain, nonatomic) IESVideoBitrateCurveSwitchModel *curveSwitchModel;
@property (retain, nonatomic) NSArray *bitrateFilterList;
@property (nonatomic) BOOL enableVideoStrategies;
@property (retain, nonatomic) NSArray *videoStrategies;
@property (retain, nonatomic) NSNumber *videoStrategiesExpiredTimeStamp;
@property (retain, nonatomic) NSMutableArray *bitrateFilterInfo;

+ (id)sharedInstance;

- (BOOL)isPureFloat:(id)a0;
- (void)updateVideoBitrateCurvePriority:(id)a0;
- (id)createPriorityValueWithKeys:(id)a0 priorityConfig:(id)a1;
- (void)sortVideoBitrateCurve:(id)a0;
- (id)generalPeakTimeType;
- (BOOL)isMatchWithConfigFilter:(id)a0 conditionModel:(id)a1;
- (BOOL)isMatchForbiddenLadders:(id)a0 conditionModel:(id)a1 bitrateModel:(id)a2;
- (id)dimensionFilterElementWithInput:(id)a0 output:(id)a1 reason:(id)a2;
- (id)getRealValueWithRequirementKey:(id)a0 inModel:(id)a1;
- (id)codecFromIntToString:(long long)a0;
- (id)transToMinString:(id)a0;
- (id)transPeakTimeType:(id)a0;
- (void)parseMultidimensionalBitrateCurveConfig:(id)a0 additionalConfig:(id)a1;
- (void)parseMultidimensionalBitrateFilterConfig:(id)a0 additionalConfig:(id)a1;
- (id)getVideoBSAutoBitrateModeWithConditionModel:(id)a0 error:(id *)a1;
- (id)filterVideoBSModels:(id)a0 conditionModel:(id)a1 error:(id *)a2;
- (void)updateVideoStrategiesSettings:(id)a0;
- (void)enableVideoStrategiesSettings:(BOOL)a0;
- (id)addFilterInfoAllModels:(id)a0 filterModels:(id)a1;
- (id)getBitrateFilterInfo;
- (void)clearBitrateFilterInfo;
- (void).cxx_destruct;
- (id)init;

@end
