@class NSString, NSArray;

@interface BDXBridgeCreatePOIMediaMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *contentSource;
@property (retain, nonatomic) NSArray *materials;

+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
