@class BoxListResponse_ResponseData, RACSubject, NSArray, RACSignal, IESLiveGCDTimer, NSObject, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue, IESLiveRedEnvelopePriorityQueueDelegate;

@interface HTSRedEnvelopePriorityQueue : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *countTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (retain, nonatomic) BoxListResponse_ResponseData *currentRedEnvelope;
@property (retain, nonatomic) RACSubject *currentSubject;
@property (retain, nonatomic) RACSubject *allValuesSubject;
@property (retain, nonatomic) NSNumber *currentShowingBoxId;
@property (retain, nonatomic) NSArray *currentShowResultValues;
@property (nonatomic) BOOL isFireHeartbeat;
@property (nonatomic) long long countNumber;
@property (nonatomic) long long delayCountTimerEndNumber;
@property (retain, nonatomic) NSNumber *rushOptCode;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (weak, nonatomic) id<IESLiveRedEnvelopePriorityQueueDelegate> delegate;
@property (readonly, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) RACSignal *allValuesSignal;
@property (readonly, nonatomic) RACSignal *currentRedEnvelopeSignal;

- (void)setupTimerIfNeeded;
- (void)insertOrderly:(id)a0;
- (void)peekCurrentIfNeeded;
- (void)didRemoveRedEnvelopes:(id)a0;
- (void)countDownAndCleanMessagesIfNeededOptimized;
- (void)fireHeartbeat;
- (void)enque:(id)a0;
- (void)deque:(id)a0;
- (id)richMenAndTotalMoney;
- (void)redEnvelopeDidFinish:(id)a0;
- (id)nextRedEnvelope;
- (void)updateCurrentShowingBoxId:(id)a0;
- (void)updateLuckyBoxWinStatusWithBoxId:(id)a0 resultStatus:(unsigned long long)a1;
- (void)updateLuckyBoxStatusWithBoxId:(id)a0 boxStatus:(unsigned long long)a1 isHitBonus:(BOOL)a2;
- (void)countDownAndCleanMessagesIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;
- (void)dealloc;

@end
