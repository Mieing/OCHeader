@class NSDictionary, NSString, AWEHPCombineFrequencyConfig;

@interface AWEHPCombineDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) AWEHPCombineFrequencyConfig *freqConfig;
@property (copy, nonatomic) NSString *dataHash;

+ (id)modelWithRawData:(id)a0 error:(id *)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (id)freqConfigJSONTransformer;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
