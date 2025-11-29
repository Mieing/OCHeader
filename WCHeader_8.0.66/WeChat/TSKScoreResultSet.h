@class TSKMidiScoreResult;

@interface TSKScoreResultSet : NSObject <NSCopying>

@property (retain, nonatomic) TSKMidiScoreResult *acfScoreResult;
@property (retain, nonatomic) TSKMidiScoreResult *pyinScoreResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
