@class NSArray, AWEUserIdentifyModel;

@interface AWEUserIdentifyStructModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *identifies;
@property (retain, nonatomic) AWEUserIdentifyModel *identifyBeforeIdLabel;

+ (id)identifiesJSONTransformer;
+ (id)identifyBeforeIdLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
