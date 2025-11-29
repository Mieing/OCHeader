@interface IESSoloKTVMidiScoreModel : NSObject

@property (nonatomic) BOOL hasSong;
@property (nonatomic) float score;
@property (nonatomic) long long level;
@property (nonatomic) double start;
@property (nonatomic) double duration;

- (void)updateScore:(float)a0;
- (void)cleanUserRecord;
- (long long)scoreToLevel:(float)a0;
- (id)initWithStart:(double)a0 duration:(double)a1;

@end
