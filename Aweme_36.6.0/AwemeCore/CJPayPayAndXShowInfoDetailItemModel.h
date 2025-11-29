@class NSString;

@interface CJPayPayAndXShowInfoDetailItemModel : JSONModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL ifAppendAgreement;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
