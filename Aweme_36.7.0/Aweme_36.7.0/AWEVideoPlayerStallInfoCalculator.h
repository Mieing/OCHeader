@class NSTimer, NSString, NSDate;

@interface AWEVideoPlayerStallInfoCalculator : NSObject <AWEVideoPlayerStallInfoCalculatorProtocol>

@property (nonatomic) BOOL hasReport;
@property (nonatomic) long long maxCount;
@property (nonatomic) double maxDuration;
@property (nonatomic) long long currentCount;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSDate *stallStartTime;
@property (nonatomic) BOOL enableCalculator;
@property (retain, nonatomic) NSTimer *stallTimer;
@property (copy, nonatomic) id /* block */ onReachMaxStallBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaxStallCount:(long long)a0 andDuration:(double)a1;
- (void)beginStall;
- (void)endStall;
- (void)startCalculator;
- (void)stopCalculator;
- (void)resetStallTimer;
- (void).cxx_destruct;
- (void)reset;

@end
