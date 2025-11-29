@class NSArray;

@interface BDXBridgeChooseMediaMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *tempFiles;

+ (id)tempFilesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
