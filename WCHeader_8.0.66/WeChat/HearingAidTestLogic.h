@class NSString, HearingAidPlayer;

@interface HearingAidTestLogic : NSObject

@property (retain, nonatomic) HearingAidPlayer *player;
@property (retain, nonatomic) NSString *audioName;
@property (copy, nonatomic) id /* block */ timeoutTask;
@property (nonatomic) unsigned long long curTestingAudio;

- (id)init;
- (void)dealloc;
- (BOOL)startTest:(unsigned long long)a0 onTimeout:(id /* block */)a1 onComplete:(id /* block */)a2;
- (BOOL)pauseTest;
- (BOOL)resumeTest;
- (BOOL)stopTest;
- (void)cancelTimeoutTask;
- (unsigned long long)testingAudio;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (id)getAudioName;
- (void).cxx_destruct;

@end
