@class TSKMidiScoreResult;

@interface TSKMidiScoreCalculatorCopy : NSObject <TSKMidiScoreCalculator>

@property (retain, nonatomic) TSKMidiScoreResult *scoreResult;

- (id)init;
- (BOOL)updateWithResultSet:(id)a0 index:(int)a1;
- (BOOL)resetWithResultSet:(id)a0;
- (void).cxx_destruct;

@end
