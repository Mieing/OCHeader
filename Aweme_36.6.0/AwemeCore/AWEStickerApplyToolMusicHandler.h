@class NSString, IESEffectModel, AWEVideoPublishViewModel;
@protocol ACCRecordSelectMusicService;

@interface AWEStickerApplyToolMusicHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (nonatomic) BOOL hasBecomeActive;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddFragment:(id)a0;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)p_observerMusicPanelStatusChangeIfNeeded;
- (void)p_asyncSendMusicInfoMessageToEffectWithStatus:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
