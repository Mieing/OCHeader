@class MPVolumeView, NSString, NSMutableArray, AVPlayer;

@interface WATemplateAudioPlayer : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) AVPlayer *audioPlayer;
@property (retain, nonatomic) MPVolumeView *m_privateVoulmeView;
@property (nonatomic) float m_lastVolume;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)play:(id)a0;
- (void)stop;
- (void)playFinished;
- (BOOL)playNextIfNeed;
- (void)forceSetVolumeView;
- (void)removeVolumeView;
- (void)forceSetSystemVolume;
- (void)setSystemVolume:(float)a0;
- (void)resumeLastVolumn;
- (void).cxx_destruct;

@end
