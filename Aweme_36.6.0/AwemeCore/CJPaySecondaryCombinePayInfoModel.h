@interface CJPaySecondaryCombinePayInfoModel : JSONModel

@property (nonatomic) long long tradeAmount;
@property (nonatomic) long long primaryAmount;
@property (nonatomic) long long secondaryAmount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

@end
