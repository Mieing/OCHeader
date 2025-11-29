@class ACCCameraSubscription, ACCSlidesBeatsViewModel, NSString;

@interface ACCSlidesBeatsService : NSObject <ACCSlidesBeatsServiceProtocol>

@property (nonatomic) BOOL shouldOpenBeatsByDefault;
@property (copy, nonatomic) id /* block */ aiBeatBlock;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) ACCSlidesBeatsViewModel *viewModel;
@property (readonly, nonatomic) BOOL isMusicBeatOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beatsStateDidChanged:(BOOL)a0 enabled:(BOOL)a1;
- (void)updateMusicBeatsStateByTrim;
- (void)aiBeatsAction;
- (BOOL)verifySlidesBeatsOfTime:(double)a0;
- (void)updateSlidesBeatsModeWithType:(unsigned long long)a0;
- (void)updateBeatsStateFlagByDefault:(BOOL)a0;
- (void)beatsStateDidChanged:(BOOL)a0;
- (void)unbindSlidesBeatsState;
- (id)initWithAIBeatActionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
