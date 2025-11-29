@class NSString, IESEffectModel;

@interface AWEStickerApplyPerformanceHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCCameraPureModeRecover>

@property (retain, nonatomic) IESEffectModel *selectedSticker;
@property (retain, nonatomic) IESEffectModel *restoreSticker;
@property (copy, nonatomic) NSString *lastRestoringStickerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)rollbackEffect;
- (BOOL)shouldClearEffect;
- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (void)trackEditToRecordDurationIfNeeded;
- (void).cxx_destruct;

@end
