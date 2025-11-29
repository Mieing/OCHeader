@class NSArray, NSString;

@interface AFDLearningInterestResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *labels;
@property (copy, nonatomic) NSString *lynxUrl;
@property (nonatomic) double lynxHeight;

+ (id)labelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
