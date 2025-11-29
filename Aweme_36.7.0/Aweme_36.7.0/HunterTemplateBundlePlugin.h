@class HunterClientDataProcessorManager, HunterSchemaProcessorManager;

@interface HunterTemplateBundlePlugin : HunterBasePlugin

@property (retain, nonatomic) HunterSchemaProcessorManager *schemaProcessorManager;
@property (retain, nonatomic) HunterClientDataProcessorManager *clientDataProcessorManager;

+ (BOOL)hasTemplateBundle:(id)a0;

- (BOOL)shouldActive;
- (void)onHunterProcessEnd:(id)a0;
- (void)onHunterBindStart:(id)a0;
- (id)processedSchemaWithSchemaProcessorManager:(id)a0;
- (void)setupLynxTemplateBundle;
- (void)useTemplateBundleCacheWhenExist;
- (void)updateLynxContextWithTemplateBundle:(id)a0;
- (void)updateMonitorBulletResFromByTemplateBundle;
- (void)handleHunterConfigCollectionItem:(id)a0;
- (void)setupSchemaAndClientDataProcessorWithPageConfigModel:(id)a0;
- (id)clientDataWithClientDataProcessorManager:(id)a0;
- (void).cxx_destruct;

@end
