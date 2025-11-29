@class NSArray;
@protocol CJPayLynxSchemaParamsRule;

@interface CJPayLynxSchemaParamsConfig : JSONModel

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL abTestParamEnable;
@property (nonatomic) double paramsLimit;
@property (copy, nonatomic) NSArray<CJPayLynxSchemaParamsRule> *rules;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
