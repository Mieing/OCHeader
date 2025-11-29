@class HunterDynamicPatchModel, NSString, HunterAbilityExecuter, HunterClientDataProcessorsModel;

@interface HunterContainerClientDataProcessor : NSObject

@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HunterClientDataProcessorsModel *processor;
@property (retain, nonatomic) HunterAbilityExecuter *JSBExecutor;

+ (void)updatePrecall:(id)a0 withInvokedResult:(id)a1 forPrecallKey:(id)a2;

- (id)applyWithParams:(id)a0;
- (id)initWithParams:(id)a0 processor:(id)a1 JSBExecutor:(id)a2;
- (void).cxx_destruct;

@end
