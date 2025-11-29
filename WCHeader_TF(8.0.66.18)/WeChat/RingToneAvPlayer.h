@class NSString, RingToneDetail, RingToneVibrateController, NSObject;

@interface RingToneAvPlayer : AVPlayer <RingToneVibrateDataSource, RingTonePlayer>

@property (nonatomic) double lastPlayTime;
@property (nonatomic) unsigned long long playTimeStamp;
@property (retain, nonatomic) RingToneDetail *curRing;
@property (copy, nonatomic) NSString *ringId;
@property (retain, nonatomic) RingToneVibrateController *vibrateController;
@property (retain, nonatomic) NSObject *timeObserver;
@property (retain, nonatomic) NSString *curPlayFile;
@property (nonatomic) BOOL customVibrateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)playRing:(id)a0;
- (void)playDefaultRing;
- (void)stopPlay;
- (void)clearResource;
- (void)playMusicFile:(id)a0;
- (void)playAudioFile:(id)a0;
- (void)startToPlay;
- (void)onPlayEnd;
- (void)onFailPlayEnd;
- (void)continuePlayWhenAppEnterForeground;
- (void)vibrateWithCaller:(id)a0;
- (void)vibrateWithRing:(id)a0;
- (void)pause;
- (void)resume;
- (void)setMute:(BOOL)a0;
- (void)restart;
- (double)currentPlayTime;
- (void).cxx_destruct;

@end
