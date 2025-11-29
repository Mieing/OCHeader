@class NSArray;

@interface NPRecommendFeatureConfig : NSObject

@property (copy, nonatomic) NSArray *featureTypes;
@property (nonatomic) BOOL c3FeatureEnabled;
@property (nonatomic) BOOL ilaRealTimeFeatureExtractionEnabled;
@property (nonatomic) BOOL ilaFeatureSaveDB;

+ (id)bimAlgorithmModelList;

- (void).cxx_destruct;

@end
