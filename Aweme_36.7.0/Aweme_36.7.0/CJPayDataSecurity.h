@interface CJPayDataSecurity : JSONModel

@property (nonatomic) BOOL enableDataSecurity;
@property (nonatomic) BOOL blurType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
