@class NSArray, NSMutableArray;

@interface TSKMidiScoreResult : TSKBaseModel <NSCopying> {
    NSMutableArray *_allScores;
}

@property (nonatomic) int totalScore;
@property (retain) NSArray *allScores;
@property (nonatomic) int lastScore;
@property (nonatomic) int curIndex;

- (id)init;
- (void)updateScore:(int)a0 atIndex:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
