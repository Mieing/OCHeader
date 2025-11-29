@class HunterDynamicPatchModel, NSString, HunterSchemaProcessorsModel, HunterJSBExecuter;

@interface HunterSchemaProcessorManager : NSObject

@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HunterSchemaProcessorsModel *processor;
@property (retain, nonatomic) HunterJSBExecuter *JSBExecuter;

- (id)applyWithParams:(id)a0;
- (id)injectDataIntoQueryDict:(id)a0 inject:(id)a1 resultDict:(id)a2 methodKey:(id)a3;
- (id)initWithDynamicPatchModel:(id)a0 schemaProcessorsModel:(id)a1 JSBExecuter:(id)a2;
- (void).cxx_destruct;

@end
