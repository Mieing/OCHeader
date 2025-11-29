@class AWEAIVideoClipManager, NSArray, NSMutableDictionary, NSString, ACCAdvanceEditAssetsHandler, NSObject, AWEVideoPublishViewModel;
@protocol ACCTrimBeatEditServiceDelegate, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCEditVideoDataProtocol, ACCTrimCropEditorFlagProtocol, ACCEditServiceProtocol;

@interface ACCTrimMultiStageBeatEditService : NSObject <ACCTrimBeatEditServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *editingVideoData;
@property (retain, nonatomic) ACCAdvanceEditAssetsHandler *assetsViewModel;
@property (retain, nonatomic) AWEAIVideoClipManager *aiClipManager;
@property (copy, nonatomic) NSArray *recordSourceAsset;
@property (retain, nonatomic) NSMutableDictionary *reversedResource;
@property (weak, nonatomic) id<ACCTrimBeatEditServiceDelegate> delegate;
@property (nonatomic) BOOL isMusicBeatOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)degreeOfRotateType:(unsigned long long)a0;

- (id)sourceAssetArray;
- (id)findAVAssetInVideoData:(id)a0 withAssetModel:(id)a1;
- (void)enableAIBeatEditWithCompletion:(id /* block */)a0;
- (void)disableAIBeatEditWithCompletion:(id /* block */)a0;
- (void)updateAIBeatStateByTrim;
- (void)p_checkAndUpdateSourceAssetArray;
- (void)p_handleAIVideoClipGenerateFailed:(id)a0;
- (id)editingNLE;
- (void)p_updateBgmWithVideoData:(id)a0;
- (void)updateRotateForAIVideoData:(id)a0;
- (void)p_transformRotationInfo:(id)a0;
- (void)updateVideoData:(id)a0 isBrandNewAiData:(BOOL)a1 forceUPdateUI:(BOOL)a2;
- (void)p_recoverReversedFile:(id)a0;
- (void)p_resetAudioAndClipInfoOfClippedVideoWithVideoData:(id)a0 withBGM:(BOOL)a1;
- (void)p_resetVideoClipRangeOfMainTrack:(id)a0;
- (void)p_updateSourceAssetArrayIfNeed;
- (void)p_changeSlotRotation:(id)a0 inVideo:(id)a1 rotationNum:(id)a2;
- (id)initWithServiceProvider:(id)a0 publishModel:(id)a1;
- (void)p_restoeResourcesFromVideoData:(id)a0 toVideoData:(id)a1;
- (void)p_updateBGMTrackInfoForNewBeatEditVideoData:(id)a0 musicId:(id)a1 bgmName:(id)a2;
- (void)p_amendmentImageSourceDurationWithNLEModel:(id)a0;
- (void)p_updateBGMClipRange;
- (void)updatePieceService;
- (void).cxx_destruct;
- (void)initData;

@end
