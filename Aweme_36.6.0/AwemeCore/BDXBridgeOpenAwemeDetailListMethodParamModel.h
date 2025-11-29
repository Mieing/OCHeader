@class NSString, NSArray, BDXBridgeOpenAwemeDetailListBizParams, NSDictionary;

@interface BDXBridgeOpenAwemeDetailListMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *currentAwemeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *detailExtensionKey;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) BDXBridgeOpenAwemeDetailListBizParams *bizParams;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *shootActivityMobJSON;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)bizParamsJSONTransformer;

- (void).cxx_destruct;

@end
