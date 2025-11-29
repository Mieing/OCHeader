@class NSString, NSArray;

@interface BDXBridgeStudioCompressImageMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reactId;
@property (retain, nonatomic) NSArray *resultImageArray;

+ (id)resultImageArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
