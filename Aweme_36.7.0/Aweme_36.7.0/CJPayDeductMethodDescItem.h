@class NSString;

@interface CJPayDeductMethodDescItem : JSONModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
