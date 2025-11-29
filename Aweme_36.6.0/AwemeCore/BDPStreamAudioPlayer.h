@class BDPStreamAudioModel, BDPMemoryDataSourceObject, TTVideoEngine, NSString, BDPUniqueID, BDPAudioSessionLock;
@protocol BDPStreamAudioPlayerStateDelegate;

@interface BDPStreamAudioPlayer : NSObject <TTVideoEngineDelegate, BDPStreamAudioPlayerProtocol>

@property (retain, nonatomic) TTVideoEngine *player;
@property (retain, nonatomic) BDPMemoryDataSourceObject *memoryDataSource;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPStreamAudioModel *audioModel;
@property (nonatomic) long long state;
@property (nonatomic) long long audioID;
@property (nonatomic) BOOL isInterruption;
@property (weak, nonatomic) id<BDPStreamAudioPlayerStateDelegate> delegate;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double buffered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1 extra:(id)a2;
- (void)setupObserver;
- (void)p_stateChange:(long long)a0 data:(id)a1;
- (id)getPulbicPropertyList;
- (id)addAudioBuffer:(id)a0;
- (BOOL)updateFinishFlag:(BOOL)a0;
- (id)initWithUniqueID:(id)a0 stateDelegate:(id)a1;
- (BOOL)paused;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (long long)playbackState;
- (BOOL)stop;
- (BOOL)playing;
- (BOOL)ended;
- (void)updateWithModel:(id)a0;
- (void)handleAVAudioSessionRouteChange:(id)a0;

@end
