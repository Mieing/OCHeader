@class NSString, MMKScorer;

@interface MMFinderLiveKTVMMKScorer : MMFinderLiveKTVBaseScorer <MMKScorerDelegate>

@property (retain, nonatomic) MMKScorer *audioScore;
@property (nonatomic) BOOL scoreBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParam:(id)a0;
- (void)initDefaultDatas;
- (BOOL)startScoreWithSong:(id)a0;
- (BOOL)stopScore;
- (void)process:(id)a0;
- (void)processScore:(id)a0;
- (BOOL)finishScore:(id /* block */)a0;
- (id)parseMusicNotes;
- (void)setKeyShift:(int)a0;
- (void)initAudioScorer;
- (void)configAudioScorer:(id)a0;
- (void)stopAudioScorer;
- (void)scorerCallback:(id)a0 didGetScoreForSentence:(int)a1 result:(id)a2;
- (void)scorerCallback:(id)a0 didFinishWithResult:(id)a1;
- (void)scorerCallback:(id)a0 targetHitIn:(double)a1 duration:(double)a2 isHit:(BOOL)a3 noteValue:(int)a4 noteHeight:(int)a5;
- (void).cxx_destruct;

@end
