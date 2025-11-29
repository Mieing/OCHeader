@class BDTuringConfig, NSString, NSTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDTuringEventService : NSObject

@property (retain, nonatomic) NSMutableArray *touchEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) double lastSamplingTimeInterval;
@property (nonatomic) double globalLastSamplingTimeInterval;
@property (retain, nonatomic) NSMutableArray *conflictEventArr;
@property (copy, nonatomic) NSString *reportHost;
@property (retain, nonatomic) NSTimer *conflictEventReportTimer;
@property (retain) BDTuringConfig *config;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *sharkLogId;
@property (copy, nonatomic) NSString *verifyScene;
@property (nonatomic) long long type;
@property (nonatomic) long long initTime;
@property (retain, nonatomic) NSMutableArray *pageArr;
@property (retain, nonatomic) NSMutableArray *touchArr;
@property BOOL isNoCaptchaCollecting;
@property (nonatomic) BOOL shouldPreCollectTouchEvent;
@property (nonatomic) BOOL shouldCollectTouchEvent;
@property (nonatomic) BOOL shouldPreCollectPageHistory;
@property (nonatomic) BOOL shouldCollectPageHistory;
@property BOOL isFirstLaunch;

+ (id)sharedInstance;

- (void)collectEvent:(id)a0 data:(id)a1;
- (void)collectVerifyConflictEventWithLogID:(id)a0 subtype:(id)a1 detail:(id)a2 conflictCode:(long long)a3;
- (id)paramCheck:(id)a0;
- (void)nativeCollectEvent:(id)a0 data:(id)a1;
- (id)toucheventFromTouch:(id)a0;
- (void)collectTouchEvents:(id)a0;
- (id)globalToucheventFromTouch:(id)a0;
- (void)reportConflictEvents;
- (void)cancelConflictEventReportTimer;
- (void)reportConflictEventsInner;
- (void)startConflictEventReportTimer;
- (void)conflictEventReportTimerFired;
- (void)h5CollectEvent:(id)a0 data:(id)a1;
- (id)fetchTouchEvents;
- (void)clearAllTouchEvents;
- (void)collectTouchEventsFromEvent:(id)a0;
- (void)collectGlobalTouchEventsFromEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
