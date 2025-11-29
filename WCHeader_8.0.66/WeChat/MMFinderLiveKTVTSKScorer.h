@class NSString, TSKScorer;
@protocol TSKMidiScoreCalculator;

@interface MMFinderLiveKTVTSKScorer : MMFinderLiveKTVBaseScorer <TSKScorerDelegate>

@property (retain, nonatomic) TSKScorer *audioScore;
@property (retain, nonatomic) id<TSKMidiScoreCalculator> calculator;
@property (nonatomic) double lastScoreRatio;
@property (nonatomic) unsigned long long scoreSenCnt;
@property (nonatomic) int lastScoreSenIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParam:(id)a0;
- (void)initDefaultDatas;
- (BOOL)startScoreWithSong:(id)a0;
- (BOOL)stopScore;
- (void)process:(id)a0;
- (BOOL)finishScore:(id /* block */)a0;
- (id)parseMusicNotes;
- (void)enableRatioReduce:(BOOL)a0;
- (void)initAudioScorer;
- (void)stopAudioScorer;
- (void)setReduceRatio:(double)a0;
- (void)setKeyShift:(int)a0;
- (void)scorer:(id)a0 didGetScoreForSentence:(int)a1 result:(id)a2;
- (void)scorer:(id)a0 didFinishWithResult:(id)a1;
- (void)scorer:(id)a0 targetHitIn:(double)a1 duration:(double)a2 isHit:(BOOL)a3 noteValue:(int)a4;
- (void).cxx_destruct;

@end
