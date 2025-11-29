@class NSArray;

@interface AWEMessageReadSwitchResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *readSwitchModelList;

+ (id)readSwitchModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
