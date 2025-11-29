@class NSString;

@interface CJPayDyPayMultiSignInfo : JSONModel

@property (copy, nonatomic) NSString *displayTypeTitle;
@property (copy, nonatomic) NSString *displayMaskValue;
@property (copy, nonatomic) NSString *displayValue;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
