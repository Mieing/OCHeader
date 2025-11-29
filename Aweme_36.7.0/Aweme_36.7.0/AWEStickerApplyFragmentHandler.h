@class NSString, IESEffectModel, AWEVideoFragmentInfo;

@interface AWEStickerApplyFragmentHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (weak, nonatomic) AWEVideoFragmentInfo *lastFlowFragment;
@property (nonatomic) BOOL shouldUpdateLastFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1 changeReason:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (id)p_getChallengeInfosFromProp:(id)a0 cuttentProp:(id)a1;
- (void).cxx_destruct;
- (id)viewModel;

@end
