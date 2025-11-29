@class NSString, AWECustomRecordTransitionDelegate, AWEUITransitionHost;

@interface AWEVideoRouterRecordService : NSObject <AWEStudioRecordService>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (retain, nonatomic) AWECustomRecordTransitionDelegate *customizedTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDSStudioAdapterClass;
+ (id)shared;

- (void)handleStickerShootError:(id)a0;
- (id)aAWEDSStudioAdapter;
- (id)openRecorderWithInputData:(id)a0;
- (id)createOrContinueRecordFlowWithInputData:(id)a0;
- (id)createNewRecorderAfterFinishingOldCreationWithInputData:(id)a0 viewController:(id)a1 dismissAnimated:(BOOL)a2;
- (id)p_removeRecorderVCAllAssociatedSecondaryVC:(id)a0;
- (id)createOrContinueRecordNormalFlowWithInputData:(id)a0;
- (BOOL)supportPicTemplateSceneWith:(id)a0;
- (id)createPicTemplateVideoWithEffectModel:(id)a0 inputData:(id)a1 keywords:(id)a2;
- (id)createAIStickerVideoWithEffectModel:(id)a0 effectId:(id)a1 inputData:(id)a2 keywords:(id)a3;
- (id /* block */)recordFlowWithInputData:(BOOL)a0;
- (id /* block */)openRecorderPromise;
- (void)p_createNewRecorderAfterFinishingOldCreationWithInputData:(id)a0 viewController:(id)a1 dismissAnimated:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_startPublishmentSessionIfNeeded:(id)a0;
- (void)p_copyRepoValuesIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
