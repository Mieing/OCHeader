@class NSString, NSDictionary;

@interface CJPayIAPGrowthRetainConfigModel : JSONModel

@property (copy, nonatomic) NSString *growthModelViewListStr;
@property (copy, nonatomic) NSDictionary *extDic;
@property (copy, nonatomic) NSDictionary *commonParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
