@class HearingAidPlayer;
@protocol ChooseModelLogicDelegate;

@interface HearingAidChooseModePairLogic : NSObject

@property (retain, nonatomic) HearingAidPlayer *player;
@property (nonatomic) unsigned long long audio1;
@property (nonatomic) unsigned long long audio2;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ timeoutTask;
@property (weak, nonatomic) id<ChooseModelLogicDelegate> delegate;

- (id)initWithAudio1:(unsigned long long)a0 audio2:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)dealloc;
- (BOOL)start:(BOOL)a0 autoNext:(BOOL)a1;
- (id)getAudioPath:(unsigned long long)a0;
- (id)getAudioPath:(unsigned long long)a0 isAbsolutePath:(BOOL)a1;
- (BOOL)stop;
- (BOOL)resume;
- (BOOL)pause;
- (BOOL)isPlaying:(BOOL)a0;
- (BOOL)isPause:(BOOL)a0;
- (id)getAudioName:(BOOL)a0;
- (id)getAudioName:(BOOL)a0 requireFileName:(BOOL)a1;
- (void).cxx_destruct;

@end
