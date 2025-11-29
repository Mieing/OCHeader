@class AWEDynamicPatchModel;

@interface AWEEcomAISearchAnnieXModel : NSObject

@property (weak, nonatomic) AWEDynamicPatchModel *model;

+ (id)searchGlobalPropsForModel:(id)a0;
+ (id)processedSchemaWithModel:(id)a0;
+ (id)p_lynxInitialDataWithModel:(id)a0;

- (id)processedSchema;
- (id)getAnnieXModelWithModel:(id)a0;
- (id)templateDataWithModel:(id)a0;
- (id)getAnnieXModel;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
