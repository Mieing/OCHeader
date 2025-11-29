@class NSArray;
@protocol CJPaySchemaRedirectRule;

@interface CJPaySchemaRedirectConfig : JSONModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray<CJPaySchemaRedirectRule> *rules;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
