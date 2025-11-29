@class IESECPDPVideoPlayerAwemeEngineConfig, NSString, UIView;
@protocol IESECAwemeVideoViewProtocol, IESECPDPVideoPlayerEngineLifeCycleProtocol;

@interface IESECPDPVideoPlayerAwemeEngine : NSObject <IESECAwemeVideoViewDelegate, IESECPDPVideoPlayerEngineProtocol>

@property (retain, nonatomic) UIView<IESECAwemeVideoViewProtocol> *awemePlayerView;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) IESECPDPVideoPlayerAwemeEngineConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECPDPVideoPlayerEngineLifeCycleProtocol> proxy;
@property (readonly, nonatomic) double currentPlayTime;
@property (readonly, nonatomic) double totalDuration;

- (void)videoView:(id)a0 playbackFailedWithError:(id)a1;
- (void)videoViewDidReadyForDisplay:(id)a0;
- (double)updateVideoViewPlayTimeInterval:(id)a0;
- (void)videoView:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)videoView:(id)a0 didChangePlayState:(unsigned long long)a1;
- (void)updateContentFillMode:(unsigned long long)a0;
- (void)initPlayerEngine;
- (void)seekToTime:(double)a0 withCompletion:(id /* block */)a1;
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
