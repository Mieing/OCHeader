@class NSString, IESECVideoPlayerController, IESECPDPVideoPlayerTTEngineConfig;
@protocol IESECPDPVideoPlayerEngineLifeCycleProtocol;

@interface IESECPDPVideoPlayerTTEngine : NSObject <IESECVideoPlayerControllerDelegate, IESECPDPVideoPlayerEngineProtocol>

@property (retain, nonatomic) IESECVideoPlayerController *player;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) IESECPDPVideoPlayerTTEngineConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECPDPVideoPlayerEngineLifeCycleProtocol> proxy;
@property (readonly, nonatomic) double currentPlayTime;
@property (readonly, nonatomic) double totalDuration;

- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)videoReadyToDisplayOfPlayerController:(id)a0;
- (void)updateContentFillMode:(unsigned long long)a0;
- (void)initPlayerEngine;
- (void)seekToTime:(double)a0 withCompletion:(id /* block */)a1;
- (void)didReceivePlayTimeChangeCallBack;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)updateWithConfig:(id)a0;
- (id)init;
- (void)stop;
- (void)setMute:(BOOL)a0;
- (id)videoPlayerView;
- (BOOL)isMute;

@end
