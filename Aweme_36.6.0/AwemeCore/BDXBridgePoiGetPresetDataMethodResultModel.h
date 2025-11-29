@class NSNumber, NSString, NSArray;

@interface BDXBridgePoiGetPresetDataMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSString *music;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSArray *imageList;
@property (retain, nonatomic) NSArray *materials;

+ (id)imageListJSONTransformer;
+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
