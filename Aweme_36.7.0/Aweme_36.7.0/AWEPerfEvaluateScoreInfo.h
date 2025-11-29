@interface AWEPerfEvaluateScoreInfo : NSObject

@property (nonatomic) float instanceScore;
@property (nonatomic) float recentScore;
@property (nonatomic) float stableScore;

- (id)initWithInstanceScore:(float)a0 recentScore:(float)a1 stableScore:(float)a2;

@end
