@class NSString;

@interface CJPaySchemaRedirectRule : JSONModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *url;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
