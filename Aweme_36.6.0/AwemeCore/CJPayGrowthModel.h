@class CJPayRetainContactInfo, NSString, NSArray, NSDictionary;

@interface CJPayGrowthModel : JSONModel

@property (copy, nonatomic) NSString *growthType;
@property (copy, nonatomic) NSArray *viewModelList;
@property (copy, nonatomic) NSDictionary *exts;
@property (retain, nonatomic) CJPayRetainContactInfo *contactInfo;
@property (copy, nonatomic) NSString *lynxScheme;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
