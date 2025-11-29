@class NSString, TTVideoEngine, NSData, AWESiriIntentsModel;

@interface AWESiriBackgroundPlayer : NSObject <TTVideoEngineDelegate>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) AWESiriIntentsModel *model;
@property (retain, nonatomic) NSData *coverImgData;
@property (nonatomic) double startTime;
@property (nonatomic) double prepareTime;
@property (nonatomic) double videoPlayStartTime;
@property (nonatomic) BOOL hasReportedVideoPlay;
@property (nonatomic) BOOL hasReportedVideoFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineAudioRendered:(id)a0;
- (double)getCurrentPlayTime;
- (void)setupRemotePlay;
- (void)addBackgroundListener;
- (double)calculatePrepareScoreWithDuration:(double)a0 prepareTime:(double)a1;
- (void)playMusic:(id)a0;
- (void)closePlayer;
- (double)getCurrentPlayProgress;
- (void).cxx_destruct;

@end
