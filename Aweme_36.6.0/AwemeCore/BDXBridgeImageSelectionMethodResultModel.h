@class NSArray, NSDictionary;

@interface BDXBridgeImageSelectionMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
