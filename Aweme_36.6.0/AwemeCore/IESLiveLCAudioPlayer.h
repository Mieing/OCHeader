@class NSString;
@protocol IESLiveRoomRealStreamingServiceAdapter, IESLiveAudioPlayerDelegate, IESLiveAudioPlayerInput;

@interface IESLiveLCAudioPlayer : NSObject <IESLiveAudioPlayerProvider>

@property (retain, nonatomic) id<IESLiveRoomRealStreamingServiceAdapter> player;
@property (weak, nonatomic) id<IESLiveAudioPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioPlayerInput> audioInput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) float volume;
@property (readonly, nonatomic) float duration;
@property (nonatomic) float overtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlay;
- (void)startPlay;
- (void).cxx_destruct;
- (void)pause;
- (id)initWith:(id)a0;
- (BOOL)prepareToPlay;
- (void)playAtTime:(double)a0;

@end
