@class HunterDynamicPatchModel, NSString, HunterSchemaProcessorsModel, HunterAbilityExecuter;

@interface HunterContainerSchemaProcessor : NSObject

@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HunterSchemaProcessorsModel *processor;
@property (retain, nonatomic) HunterAbilityExecuter *JSBExecutor;

- (id)applyWithParams:(id)a0;
- (id)initWithParams:(id)a0 processor:(id)a1 JSBExecutor:(id)a2;
- (id)injectDataIntoQueryDict:(id)a0 inject:(id)a1 resultDict:(id)a2 methodKey:(id)a3;
- (void).cxx_destruct;

@end
