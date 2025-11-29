@class NSData, NSArray;
@protocol MMKScorerDelegate;

@interface MMKScorer : NSObject

@property (nonatomic) BOOL initSucc;
@property (nonatomic) void *scorerHandler;
@property (nonatomic) int channel;
@property (nonatomic) int sampleRate;
@property (retain, nonatomic) NSData *noteData;
@property (retain, nonatomic) NSArray *sentenceTimeArray;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) int totalScore;
@property (weak, nonatomic) id<MMKScorerDelegate> delegate;

+ (id)parseNormalizedNotesOrig:(id)a0;

- (id)initWithSampleRate:(int)a0 channel:(int)a1 config:(id)a2;
- (void)deinit;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)createScorerHandler;
- (void)freeScorerHandler;
- (void)updateHitResult:(double)a0 isHit:(BOOL)a1 noteValue:(int)a2 noteHeight:(int)a3;
- (void)updateScoreWithIndex:(int)a0 score:(int)a1;
- (void)process:(const char *)a0 inSize:(int)a1 timestamp:(double)a2;
- (void)finishAllScoreProcess;
- (void)setKeyShift:(int)a0;
- (id)normalizedNotes;
- (void).cxx_destruct;

@end
