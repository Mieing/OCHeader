@class HunterDynamicPatchModel, NSString, HunterAbilityExecuter, HunterContainerClientDataProcessor, HunterContainerSchemaProcessor, HunterContainerStorageDataProcessor;

@interface HunterContainerAbilityManager : NSObject

@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (retain, nonatomic) HunterAbilityExecuter *JSBExecutor;
@property (retain, nonatomic) HunterContainerSchemaProcessor *schemaProcessor;
@property (retain, nonatomic) HunterContainerClientDataProcessor *clientDataProcessor;
@property (retain, nonatomic) HunterContainerStorageDataProcessor *storageDataProcessor;

+ (void)updatePageConfigsList:(id)a0;

- (id)initWithDynamicPatch:(id)a0;
- (BOOL)whetherTargetPage:(id)a0;
- (void)__abilityRegister;
- (void)abilityRegistWithModel:(id)a0;
- (id)initWithDynamicPatch:(id)a0 pageConfigModel:(id)a1;
- (id)abilityInvoke:(unsigned long long)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
