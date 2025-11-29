@class NSArray, NSNumber;

@interface IESECLiveSmallWindowInformationModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *smallWindowLabels;
@property (retain, nonatomic) NSNumber *refreshCycle;

+ (id)smallWindowLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
