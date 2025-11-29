@class NSString, IESEffectModel;

@interface AWEStickerApplySectionHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddFragment:(id)a0;
- (id)publishModel;
- (void)cacheStickerWithSticker:(id)a0 cacheKey:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void).cxx_destruct;

@end
