@class NSNumber, NSString;

@interface IESLLOriginalAdModel : IESLLifeBaseApiModel

@property (retain, nonatomic) NSNumber *creativeID;
@property (nonatomic) long long adType;
@property (copy, nonatomic) NSString *logExtra;

+ (id)adTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
