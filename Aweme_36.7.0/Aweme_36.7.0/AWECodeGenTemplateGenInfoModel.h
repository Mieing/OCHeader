@class NSArray, AWECodeGenPerformanceAnalysisModel;

@interface AWECodeGenTemplateGenInfoModel : AWEBaseDataModel

@property (nonatomic) long long templateId;
@property (copy, nonatomic) NSArray *genImageInfoListModelArray;
@property (retain, nonatomic) AWECodeGenPerformanceAnalysisModel *performanceAnalysisModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
