@class NSString;

@interface BDXBridgeSetStorageItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *biz;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
