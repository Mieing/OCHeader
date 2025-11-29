@class NSArray;

@interface MMKScoreResultSet : NSObject

@property (nonatomic) int totalScore;
@property (nonatomic) int avgScore;
@property (retain) NSArray *allScores;
@property (nonatomic) int lastScore;
@property (nonatomic) int curIndex;

- (void).cxx_destruct;

@end
