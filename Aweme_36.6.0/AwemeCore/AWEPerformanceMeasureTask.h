@class NSNumber, NSString;

@interface AWEPerformanceMeasureTask : NSObject

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *loadingViewAppearedTime;
@property (retain, nonatomic) NSNumber *responseReceivedTime;
@property (retain, nonatomic) NSNumber *viewDisplayedTime;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *enterFrom;

+ (void)trackEnterPage:(id)a0;
+ (id)networkType;

- (id)initWithEvent:(id)a0 eventType:(id)a1 enterFrom:(id)a2;
- (void)firstShowInterrupted:(id)a0;
- (void)viewDisplayed;
- (void)loadingViewAppeared;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)reset;
- (void)responseReceived;

@end
