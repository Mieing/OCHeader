@class NSMutableDictionary;

@interface SCCEventTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventRecord;
@property (nonatomic) double startTime;
@property (nonatomic) double csStartTime;
@property (nonatomic) double userRequestTime;
@property (retain, nonatomic) NSMutableDictionary *sccResult;

+ (void)report:(id)a0 params:(id)a1;

- (void)doReset;
- (void)didStart:(id)a0 url:(id)a1;
- (void)didSwitchOff:(BOOL)a0 bid:(id)a1 url:(id)a2;
- (void)didHitAllowList:(id)a0;
- (void)didHitCache:(id)a0;
- (void)didHitBlockList:(id)a0;
- (void)didUserSkip;
- (void)didCSStart;
- (double)didCSEnd;
- (void)didReceiveCSError:(id)a0;
- (void)didDiscardCSResult;
- (void)didReceiveTTNetCode:(int)a0;
- (void)didReceiveCSResult:(id)a0 lable:(id)a1 backEndCode:(int)a2 logID:(id)a3;
- (void)didUserRequestStart;
- (void)didUserRequestSuccess:(BOOL)a0 reloadCount:(id)a1 failedReason:(id)a2;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
