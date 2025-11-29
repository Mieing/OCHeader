@class NSString;

@interface AWECodeGenCombProductModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *combProductId;
@property (copy, nonatomic) NSString *combSkuId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
