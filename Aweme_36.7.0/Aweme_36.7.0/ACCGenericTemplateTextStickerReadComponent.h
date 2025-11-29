@class NSString;
@protocol ACCGenericTemplateApplierService;

@interface ACCGenericTemplateTextStickerReadComponent : ACCFeatureComponent <ACCGenericTemplateApplierSubscriber>

@property (weak, nonatomic) id<ACCGenericTemplateApplierService> applierService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateApplierDidApplyForUpdateVideoDataWithTemplateModel:(id)a0 scene:(unsigned long long)a1;
- (void)templateApplierDidUpdateMaterialWithPreprocessFinish:(id)a0 templateModel:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;
- (void)setupData;

@end
