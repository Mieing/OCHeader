@class NSString, NSDictionary;

@interface CJPaySchemaParamSetting : JSONModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *param;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
