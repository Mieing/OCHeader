@class NSDictionary;

@interface BDUGLuckyInjectRules : BDUGLuckyBDModel

@property (nonatomic) BOOL globalEnableInjected;
@property (copy, nonatomic) NSDictionary *url2ruleMap;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
