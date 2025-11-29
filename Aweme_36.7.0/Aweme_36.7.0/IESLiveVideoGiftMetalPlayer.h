@class NSError, UIView, IESLiveMultiVideoGiftMetalView, NSString, IESLiveVideoGiftResourceInfo, IESLiveAssetReaderOutput, IESLiveVideoGiftMetalConfiguration, NSObject;
@protocol OS_dispatch_queue, IESLiveVideoGiftMetalPlayerDelegate, IESLiveVideoGiftAudioPlayerProtocol;

@interface IESLiveVideoGiftMetalPlayer : NSObject <IESLiveVideoGiftAudioPlayerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *model;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *config;
@property (retain, nonatomic) IESLiveMultiVideoGiftMetalView *videoGiftMetalView;
@property (retain, nonatomic) NSError *renderError;
@property (retain, nonatomic) id<IESLiveVideoGiftAudioPlayerProtocol> audioPlayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPlaybackQueue;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<IESLiveVideoGiftMetalPlayerDelegate> delegate;
@property (nonatomic) unsigned long long playerType;
@property (retain, nonatomic) IESLiveAssetReaderOutput *readerOutput;
@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)totalDurationOfPlayingEffect;
- (void)updateWithModel:(id)a0 config:(id)a1 delegate:(id)a2 type:(unsigned long long)a3 existAudio:(BOOL)a4;
- (void)startPlayAudioResources;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mtkViewFrame;
- (void)renderMTKView;
- (void)audioPlayer:(id)a0 prepareWithSampleRate:(double)a1 channels:(unsigned int)a2;
- (void)audioPlayer:(id)a0 processAudioFrameWithRawData:(float **)a1 samples:(int)a2 timestamp:(long long)a3;
- (void)audioPlayer:(id)a0 didOccurError:(id)a1;
- (void)createAudioPlayBackQueueIfNeeded;
- (void)pr_configRenderViewContentModeFromModel;
- (void)pr_updateWithModel:(BOOL)a0;
- (void)pauseAudioPlayerIfNeeded;
- (void)resumeAudioPlayerIfNeeded;
- (void)_startPlayAudioResources;
- (void)seekAudioPlayerToTimeIfNeeded:(double)a0;
- (void)stopAudioPlayerIfNeeded;
- (void)startPlayAudioPlayerFromBeginning;
- (void)pr_didFinishPlayingWithError:(id)a0;
- (void)reportAt:(unsigned long long)a0 sceneError:(id)a1;
- (void)pr_playingWithNonFatalError:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)destroy;
- (double)currentTime;
- (void)seekToTime:(double)a0;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
