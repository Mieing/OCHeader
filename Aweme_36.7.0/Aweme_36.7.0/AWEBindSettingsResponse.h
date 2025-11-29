@class NSArray;

@interface AWEBindSettingsResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *dataArray;

+ (id)dataArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
