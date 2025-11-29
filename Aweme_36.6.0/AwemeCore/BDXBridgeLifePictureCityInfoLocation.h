@class NSString, NSArray;

@interface BDXBridgeLifePictureCityInfoLocation : BDXBridgeModel

@property (copy, nonatomic) NSString *cityName;
@property (retain, nonatomic) NSArray *localIds;

+ (id)localIdsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
