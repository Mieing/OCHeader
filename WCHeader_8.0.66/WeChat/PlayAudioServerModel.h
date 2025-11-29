@class AVAudioPlayer, NSString, NSArray, AACWeakTimer;

@interface PlayAudioServerModel : NSObject <AVAudioPlayerDelegate> {
    double nextTime;
    int current;
    double eventSpacingTime;
    double eventSpacingCalibrationTime;
}

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) AACWeakTimer *timer;
@property (retain, nonatomic) AACWeakTimer *AudioServerPlayerTimer;
@property (retain, nonatomic) AACWeakTimer *audioPlayerTimer;
@property (retain, nonatomic) AACWeakTimer *systemVibrationPlayerTimer;
@property (copy, nonatomic) id /* block */ playBlock;
@property (copy, nonatomic) id /* block */ playNextBlock;
@property (copy, nonatomic) id /* block */ playProgress;
@property (nonatomic) BOOL audioPlayFinish;
@property (nonatomic) double startTime;
@property (nonatomic) long long playerID;
@property (nonatomic) long long playerType;
@property (nonatomic) long long playedCount;
@property (nonatomic) long long runLoopCount;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) id /* block */ errorCallBack;
@property (nonatomic) double delayTime;
@property (nonatomic) double offsetTime;
@property (nonatomic) double firstPlayTime;
@property (nonatomic) double allTime;
@property (copy, nonatomic) NSArray *playIDAry;
@property (copy, nonatomic) NSArray *truncatedHapticAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startPlay;
- (void)stopPlay;
- (void)seekToPlay:(int)a0;
- (void)setAudioPlayerOffsetTime:(double)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerBeginInterruption:(id)a0;
- (void)audioPlayerEndInterruption:(id)a0 withOptions:(unsigned long long)a1;
- (void)playOver:(id /* block */)a0;
- (void)setPlayNext:(id /* block */)a0 playProgress:(id /* block */)a1;
- (void)registModelAudioPlayer:(id)a0;
- (void)timeOut:(id)a0;
- (void)prepareToPlay;
- (void)playSystemVibrationWithIndex:(long long)a0;
- (void)systemVibrationPaly:(id)a0;
- (void)fastVibrationPaly:(id)a0;
- (void)callNext;
- (void)begainAudioPlay:(id)a0;
- (long long)getPlayCurrentID:(int)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
