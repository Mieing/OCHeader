@class NSString, IESEffectModel;
@protocol ACCRecordSelectMusicService;

@interface AWEStickerRedpacketShootHandler : AWEStickerApplyBaseHandler <ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (nonatomic) BOOL enableEffectMusicTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)propServiceShouldApplyProp:(id)a0 propSource:(long long)a1 propIndexPath:(id)a2;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (void)configEnableEffectMusicTime:(BOOL)a0;
- (void)showGuideVideoIfNeedWithEffect:(id)a0 completion:(id /* block */)a1;
- (void)p_trackGuideSkipWithEffectId:(id)a0;
- (void)p_trackGuideShowWithEffectId:(id)a0;
- (void).cxx_destruct;

@end
