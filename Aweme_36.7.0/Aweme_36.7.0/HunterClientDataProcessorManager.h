@class HunterDynamicPatchModel, NSString, HunterClientDataProcessorsModel, HunterJSBExecuter;

@interface HunterClientDataProcessorManager : NSObject

@property (retain, nonatomic) HunterDynamicPatchModel *dynamicPatchModel;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HunterClientDataProcessorsModel *processor;
@property (retain, nonatomic) HunterJSBExecuter *JSBExecuter;
@property (copy, nonatomic) NSString *customPrecallKey;
@property (nonatomic) BOOL defaultEnableGlobalJSB;

+ (void)updatePrecall:(id)a0 withInvokedResult:(id)a1 forPrecallKey:(id)a2;

- (id)initWithDynamicPatchModel:(id)a0 clientDataProcessorsModel:(id)a1 JSBExecuter:(id)a2;
- (id)applyWithParams:(id)a0;
- (void).cxx_destruct;

@end
