@class NSString, HearingAidPlayer;

@interface HearingAidSuccessLogic : NSObject

@property (retain, nonatomic) HearingAidPlayer *player;
@property (copy, nonatomic) id /* block */ timeoutTask;
@property (nonatomic) unsigned long long curMode;
@property (retain, nonatomic) NSString *audioPath;
@property (nonatomic) BOOL isFromInit;

- (id)init;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (BOOL)pauseTest;
- (BOOL)resumeTest;
- (BOOL)startPlay:(unsigned long long)a0 isInit:(BOOL)a1 onComplete:(id /* block */)a2;
- (void)dataReport:(BOOL)a0;
- (void).cxx_destruct;

@end
