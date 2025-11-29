@class HunterSchemaProcessorManager;

@interface HunterSchemaProcessorPlugin : HunterBasePlugin

@property (retain, nonatomic) HunterSchemaProcessorManager *schemaProcessorManager;

- (BOOL)shouldActive;
- (void)onHunterSchemaProcessStart:(id)a0;
- (void)onHunterBindStart:(id)a0;
- (BOOL)whetherTargetPage:(id)a0;
- (void)setupSchemaProcessor;
- (id)processedSchemaWithSchemaProcessorManager:(id)a0;
- (void).cxx_destruct;

@end
