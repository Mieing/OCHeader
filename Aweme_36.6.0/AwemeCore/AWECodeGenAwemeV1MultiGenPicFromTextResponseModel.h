@class NSString, NSArray, AWECodeGenPerformanceAnalysisModel;

@interface AWECodeGenAwemeV1MultiGenPicFromTextResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *genImageInfoListModelArray;
@property (copy, nonatomic) NSString *moodSwing;
@property (copy, nonatomic) NSArray *wordSegmentsInfoListModelArray;
@property (retain, nonatomic) AWECodeGenPerformanceAnalysisModel *performanceAnalysisModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
