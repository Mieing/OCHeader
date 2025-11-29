@class TemplateInfo_OC;

@interface NLETemplateModel_OC : NLEModel_OC

@property (nonatomic) float cutsameCanvasRatioOrigin;
@property (nonatomic) struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) TemplateInfo_OC *info;

+ (BOOL)canSupportFeatureBits:(id)a0;
+ (id)restore:(id)a0;
+ (id)saveToDraft:(id)a0;
+ (id)createFromDraft:(id)a0;
+ (id)getFeatureListFromTemplateJson:(id)a0;
+ (id)getFeatureListFromTemplateModel:(id)a0;
+ (id)getFeatureBitsFromFeatureList:(id)a0;
+ (id)currentFeatureBits;
+ (id)currentFeatureBitsArr;
+ (id)currentFeatureBitsRemoveFeatureList:(id)a0;
+ (BOOL)canSupportFeatureBitsArray:(id)a0;
+ (id)supportFeatureList;
+ (BOOL)isValidTemplate:(id)a0;
+ (void)registerTemplateModelClass;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (void)storeToZip:(id)a0 withResourceFolder:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)getMutableAssetItems;
- (id)getAllMutableItems;
- (id)getMutableTextItems;
- (id)getMutableSlotItems;
- (id)getAllMutableTextClipsFromSlot:(id)a0;
- (id)convertNLEMappingNode:(id)a0;
- (id)getStage;
- (id)init;
- (id)store;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
