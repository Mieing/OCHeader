@class NSString, IESEffectModel;

@interface AWEStickerApplyCustomizedEffectHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (void)preloadPropAnnotationsIfNeed;
- (void)saveFrameSamplingImages;
- (void)markUsedCustomizedEffect;
- (void).cxx_destruct;

@end
