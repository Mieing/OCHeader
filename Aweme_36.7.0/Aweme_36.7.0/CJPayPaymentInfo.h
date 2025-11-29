@class NSString;

@interface CJPayPaymentInfo : JSONModel

@property (copy, nonatomic) NSString *typeMark;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *colortype;
@property (copy, nonatomic) NSString *icon;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
