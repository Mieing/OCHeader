@class NSArray;

@interface ACCBeatSequenceGenerator : NSObject

@property (nonatomic) double defaultTimeInterval;
@property (nonatomic) double minTimeInterval;
@property (nonatomic) double maxTimeInterval;
@property (nonatomic) BOOL musicBeatsOn;
@property (retain, nonatomic) NSArray *beatsArray;

- (id)initWithTimeIntervalDefault:(double)a0 min:(double)a1 max:(double)a2;
- (double)genertateBeatWithTime:(double)a0;
- (void).cxx_destruct;

@end
