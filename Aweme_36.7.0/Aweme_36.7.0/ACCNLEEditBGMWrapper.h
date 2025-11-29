@class NSString, NLEInterface_OC, AVAsset, AWEVideoPublishViewModel;

@interface ACCNLEEditBGMWrapper : NSObject <ACCEditBuildListener, ACCEditBGMProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AVAsset *bgmAsset;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setupPublishViewModel:(id)a0;
- (float)bgmVolume;
- (void)setVolumeForAudio:(float)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)setBGM:(id)a0 startTime:(double)a1 clipDuration:(double)a2 repeatCount:(long long)a3;
- (void)removeBGM;
- (void)setBGMClipRange:(id)a0;
- (void)setBGM:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (void)recoverRepeatCount;
- (void)setBGMAsset:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (id)p_getBGMTrack;
- (void)p_removeOldBGM;
- (void)p_recoverRepeatCountData;
- (void).cxx_destruct;

@end
