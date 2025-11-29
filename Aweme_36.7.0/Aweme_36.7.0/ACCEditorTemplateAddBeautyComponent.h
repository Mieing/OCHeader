@class ACCAEEffectApplyHandler, IESEffectModel, NSString;
@protocol ACCGenericTemplateApplierService, AEKEffectOperator;

@interface ACCEditorTemplateAddBeautyComponent : ACCFeatureComponent <ACCGenericTemplateApplierSubscriber>

@property (weak, nonatomic) id<ACCGenericTemplateApplierService> applierService;
@property (retain, nonatomic) ACCAEEffectApplyHandler *handler;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) IESEffectModel *beautyEffectModel;
@property (retain, nonatomic) id<AEKEffectOperator> appliedBeautyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)templateApplierDidApplyForUpdateVideoDataWithTemplateModel:(id)a0 scene:(unsigned long long)a1;
- (void)templateApplierDidRemoveWithTemplateId:(id)a0 changeInfo:(id)a1;
- (void)templateApplierWillReplaceSlotWithTemplateId:(id)a0;
- (void)templateApplierDidRemoveForUpdateVideoDataWithTemplateId:(id)a0;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (id)beautyEffectID;
- (void)trackTemplateBeautyPreloadSuccess:(BOOL)a0 templateID:(id)a1 failReason:(id)a2;
- (void)trackApplyGenericEffect:(id)a0 needToAddBeauty:(BOOL)a1 needFaceDetection:(BOOL)a2;
- (void)addAdditionalBeautyEffect;
- (void).cxx_destruct;
- (void)dealloc;

@end
