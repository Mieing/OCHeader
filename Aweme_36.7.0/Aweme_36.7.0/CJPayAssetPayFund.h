@class NSString;

@interface CJPayAssetPayFund : JSONModel

@property (copy, nonatomic) NSString *payAmountDesc;
@property (copy, nonatomic) NSString *assetDesc;
@property (copy, nonatomic) NSString *title;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
