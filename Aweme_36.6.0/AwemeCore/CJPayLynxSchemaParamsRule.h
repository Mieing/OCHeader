@class NSString, NSArray, NSDictionary;

@interface CJPayLynxSchemaParamsRule : JSONModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSArray *abSchemaKeys;
@property (copy, nonatomic) NSDictionary *abSchemaParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
