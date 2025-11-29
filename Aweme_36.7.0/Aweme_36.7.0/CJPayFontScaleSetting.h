@class NSString;

@interface CJPayFontScaleSetting : JSONModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *libraKey;
@property (copy, nonatomic) NSString *libraValue;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
