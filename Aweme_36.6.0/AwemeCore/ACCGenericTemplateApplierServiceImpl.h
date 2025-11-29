@class ACCCameraSubscription, NSString;

@interface ACCGenericTemplateApplierServiceImpl : NSObject <ACCGenericTemplateApplierService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateApplierRemoveAllLoadingTemplates;
- (void)notifyWillApplyWithTemplateModel:(id)a0;
- (void)notifyDidApplyWithTemplateModel:(id)a0 error:(id)a1;
- (void)notifyDidApplyForUpdateVideoDataWithTemplateModel:(id)a0 scene:(unsigned long long)a1;
- (void)notifyApplyDidSeekToStartWithTemplateModel:(id)a0;
- (void)notifyWillRemoveWithTemplateId:(id)a0;
- (void)notifyDidRemoveWithTemplateId:(id)a0 changeInfo:(id)a1;
- (void)notifyDidRemoveForUpdateVideoDataWithTemplateId:(id)a0;
- (void)onTemplateReplaceSlotWillStart:(id)a0;
- (void)notifyUpdateMaterialDidPreprocessFinishWithTemplate:(id)a0 error:(id)a1;
- (void)notifyDidApplyEffect:(id)a0;
- (void)notifyDidRemoveEffect:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
