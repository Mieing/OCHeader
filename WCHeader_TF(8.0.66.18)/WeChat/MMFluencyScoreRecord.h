@class NSString, NSArray;

@interface MMFluencyScoreRecord : NSObject <NSCopying>

@property (retain, nonatomic) NSString *ID;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (retain, nonatomic) NSArray *caDisplayLinkDurations;
@property (retain, nonatomic) NSArray *caDisplayLinkStartTimes;
@property (nonatomic) float score;
@property (nonatomic) int miss0FrameCount;
@property (nonatomic) int miss1FrameCount;
@property (nonatomic) int miss2FrameCount;
@property (nonatomic) int miss3FrameCount;
@property (nonatomic) int miss4FrameCount;
@property (nonatomic) int miss5OrMoreFrameCount;
@property (nonatomic) float smoothRate;
@property (nonatomic) float freezeRate;

+ (id)scoresOfRecords:(id)a0;
+ (id)smoothRateOfRecords:(id)a0;
+ (id)freezeRateOfRecords:(id)a0;
+ (void)calculateScore:(id)a0 score:(float *)a1 miss0FrameCount:(int *)a2 miss1FrameCount:(int *)a3 miss2FrameCount:(int *)a4 miss3FrameCount:(int *)a5 miss4FrameCount:(int *)a6 miss5OrMoreFrameCount:(int *)a7 smoothRate:(float *)a8 freezeRate:(float *)a9;
+ (double)worstDiscrete;

- (void)recalculate;
- (id)formatVCID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
