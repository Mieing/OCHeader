@class NSString;

@interface CJPayPwdErrorActionModel : JSONModel

@property (copy, nonatomic) NSString *action;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
