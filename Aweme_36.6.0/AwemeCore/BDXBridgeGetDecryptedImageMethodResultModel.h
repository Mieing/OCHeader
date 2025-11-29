@class NSArray;

@interface BDXBridgeGetDecryptedImageMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *imageList;

+ (id)imageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
