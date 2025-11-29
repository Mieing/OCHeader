@class NSString;

@interface CJPayForgetPwdInfo : JSONModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long times;
@property (copy, nonatomic) NSString *style;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
