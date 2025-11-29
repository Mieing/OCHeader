@class NSString;

@interface CJPayCommonRecIconInfo : JSONModel

@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (copy, nonatomic) NSString *voucherLabelStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
