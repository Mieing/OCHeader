@class NSArray, NSString, NSTimer, CADisplayLink, UIScrollView, NSMutableArray, UILabel;
@protocol MMFluencyScoreMgrDelegate;

@interface MMFluencyScoreMgr : NSObject

@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) long long runningOpType;
@property (weak, nonatomic) id<MMFluencyScoreMgrDelegate> runningIDDelegate;
@property (nonatomic) double runningBeginTime;
@property (weak, nonatomic) UIScrollView *runningScrollView;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewBeginContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewBeginVelocity;
@property (nonatomic) struct CGSize { double width; double height; } scrollViewBeginContentSize;
@property (nonatomic) double beginCallTreeTime;
@property (nonatomic) double endCallTreeTime;
@property (nonatomic) float score;
@property (nonatomic) int miss0FrameCount;
@property (nonatomic) int miss1FrameCount;
@property (nonatomic) int miss2FrameCount;
@property (nonatomic) int miss3FrameCount;
@property (nonatomic) int miss4FrameCount;
@property (nonatomic) int miss5OrMoreFrameCount;
@property (nonatomic) float smoothRate;
@property (nonatomic) float freezeRate;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isEnteredBgWhenRunning) BOOL enteredBgWhenRunning;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *frameDurations;
@property (retain, nonatomic) NSMutableArray *frameStartTimes;
@property (nonatomic) double lastTimeInterval;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (nonatomic) BOOL scoreLabelExpanded;
@property (nonatomic) BOOL hitRecord;
@property (nonatomic) BOOL hitShowFloat;
@property (nonatomic) BOOL hitGenCallTrace;
@property (nonatomic) BOOL hitFluencyOptForbidAll;
@property (nonatomic) unsigned long long curAllForbidSwitches;
@property (copy, nonatomic) NSString *curAllForbidSwitchesType;
@property (nonatomic) double startTraceTime;
@property (nonatomic) double stopTraceTime;
@property (retain, nonatomic) NSArray *ocMethodCosts;
@property (retain, nonatomic) NSArray *runLoopCosts;
@property (retain, nonatomic) NSMutableArray *scoreRecords;
@property (nonatomic) int callTraceMaxDepth;
@property (nonatomic) int callTraceMinCost;

+ (id)shared;

- (void)startForScroll:(id)a0 scrollView:(id)a1;
- (void)startForOpType:(long long)a0;
- (void)stopForScroll;
- (void)stopForScroll:(id)a0 scrollView:(id)a1;
- (void)reportFluencyScore;
- (void)uploadCallTreeIfNeeded;
- (unsigned long long)fluencyScoreScene;
- (id)fluencyScoreID;
- (id)getExtStr;
- (void)calculateScore;
- (double)calculateDuration:(long long)a0;
- (void)startDisplayLinkIfNeeded;
- (void)once:(id)a0;
- (void)tap:(id)a0;
- (void)swip:(id)a0;
- (void)foldScoreLabel;
- (void)expandScoreLabel;
- (double)getExpandX;
- (double)getFoldX;
- (void)removeScoreLabel;
- (void)showScoreTip;
- (void)changeScoreLabelAlpha;
- (void)onApplicationWillResignActiveNotification:(id)a0;
- (id)init;
- (void)checkHitStatus;
- (void)configForbidSwitchStates;
- (void).cxx_destruct;

@end
