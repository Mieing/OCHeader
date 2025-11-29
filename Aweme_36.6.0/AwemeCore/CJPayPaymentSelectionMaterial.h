@class NSString;

@interface CJPayPaymentSelectionMaterial : JSONModel

@property (nonatomic) BOOL isChecked;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *rightTitle;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *style;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
