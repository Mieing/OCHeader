@class NSDictionary;

@interface BDUGLuckyStaticActivityCommon : BDUGLuckyBDModel

@property (copy, nonatomic) NSDictionary *schemaProxy;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
