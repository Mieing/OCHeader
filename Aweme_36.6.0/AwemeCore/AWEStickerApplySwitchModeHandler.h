@class NSString, IESEffectModel;

@interface AWEStickerApplySwitchModeHandler : AWEStickerApplyBaseHandler <ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) IESEffectModel *needRestoredProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (BOOL)needSaveRestoredPropModeId:(long long)a0;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (void)p_checkRestorePropAfterCaptureReady:(id)a0 oldMode:(id)a1;
- (void)p_storePropForSwitcMode;
- (void)p_restorePropForSwitcMode;
- (void).cxx_destruct;

@end
