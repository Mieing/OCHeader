@class NSString;

@interface CJPayPayAgainTipsModel : JSONModel

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *data;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
