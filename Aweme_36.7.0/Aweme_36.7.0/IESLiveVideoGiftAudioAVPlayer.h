@class IESLiveVideoGiftMetalConfiguration, AVPlayerItem, NSString, AVPlayer;
@protocol IESLiveVideoGiftAudioPlayerDelegate;

@interface IESLiveVideoGiftAudioAVPlayer : NSObject <IESLiveVideoGiftAudioPlayerProtocol>

@property (nonatomic) BOOL hasPlayerItemAddSelfObserver;
@property (retain, nonatomic) AVPlayer *audioPlayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<IESLiveVideoGiftAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioRouteChangeListenerCallback:(id)a0;
- (id)initWithConfiguration:(id)a0 url:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
