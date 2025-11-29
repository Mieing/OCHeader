@class NSString, NSArray;

@interface BDATMValueModel : NSObject

@property (nonatomic) unsigned long long valueType;
@property (copy, nonatomic) NSString *valueFieldType;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id realValue;
@property (copy, nonatomic) NSString *rawRule;
@property (copy, nonatomic) NSArray *targetCopyKeyArray;

- (id)initWithRawRuleString:(id)a0;
- (id)realValueWithRuntimeValue:(id)a0;
- (id)realValueWithKey:(id)a0;
- (id)supportFieldTypes;
- (id)defaultValueWithRawValue:(id)a0;
- (id)numberValueWithStringValue:(id)a0;
- (id)staticValueDictionary;
- (void).cxx_destruct;

@end
