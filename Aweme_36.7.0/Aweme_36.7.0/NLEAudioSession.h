@class NLEMediaWrapper, NSString, HTSVideoData;

@interface NLEAudioSession : NSObject

@property (retain, nonatomic) HTSVideoData *veVideoData;
@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (nonatomic) int NLEChainSelection;
@property (nonatomic) BOOL audioExportCancelled;
@property (copy, nonatomic) id /* block */ commitBlock;
@property (retain, nonatomic) NSString *audioExportDir;

+ (void)p_getVolumnWaveForVideoWithVideoData:(id)a0 pointCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)getVolumnWaveForVideoWithVideoPath:(id)a0 pointCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)getVolumnWaveForAudioWithAudioPath:(id)a0 duration:(double)a1 pointsCount:(unsigned long long)a2 useVEPublic:(BOOL)a3;
+ (int)getVolumnWaveForAudioWithUrl:(id)a0 decryption_key:(id)a1 pointCount:(unsigned long long)a2 callback:(id /* block */)a3;
+ (void)getVoiceBalanceDetectConfigForAsset:(id)a0 trimIn:(double)a1 trimOut:(double)a2 completion:(id /* block */)a3;
+ (int)detachAudioStreamFile:(id)a0 videoFiles:(id)a1 timeStarts:(id)a2 timeEnds:(id)a3 timeClipStarts:(id)a4 timeClipEnds:(id)a5 videoSpeeds:(id)a6 dataProgress:(id /* block */)a7 completion:(id /* block */)a8;
+ (int)detachAudioStreamFile:(id)a0 videoFiles:(id)a1 timeStarts:(id)a2 timeEnds:(id)a3 videoSpeeds:(id)a4;

- (id)volumeInfo;
- (void)cancelAudioExport;
- (void)exportAllAudioSoundInNLEModel:(id)a0 draftFolder:(id)a1 useVEPublic:(BOOL)a2 timeAlignment:(BOOL)a3 alignmentDuration:(double)a4 completion:(id /* block */)a5;
- (void)exportAllAudioSoundInNLEModel:(id)a0 draftFolder:(id)a1 useVEPublic:(BOOL)a2 timeAlignment:(BOOL)a3 alignmentDuration:(double)a4 dataProgress:(id /* block */)a5 completion:(id /* block */)a6;
- (void)p_updateVideoDataWithCompletion:(id /* block */)a0;
- (void)getVolumnWaveForVideoWithPointsCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)exportAllAudioSoundInNLEModel:(id)a0 draftFolder:(id)a1 useVEPublic:(BOOL)a2 completion:(id /* block */)a3;
- (void)exportAllAudioSound:(id /* block */)a0;
- (void)exportVideoTrackAudio:(id /* block */)a0;
- (void)getVoiceBalanceDetectConfigForVideoAssets:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNLEMediaWrapper:(id)a0;
- (id)initWithNLEMedia:(id)a0;
- (id)initWithVideoData:(id)a0;
- (void).cxx_destruct;

@end
