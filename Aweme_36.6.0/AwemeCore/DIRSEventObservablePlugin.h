@class NSMutableArray, NSString, NSObject, DIRSContext;
@protocol OS_dispatch_queue;

@interface DIRSEventObservablePlugin : DIRSBasicModule <IRISModule, IRISEventObserver> {
    NSObject<OS_dispatch_queue> *executionQueue;
    NSMutableArray *statisticUnits;
}

@property (nonatomic) BOOL eventLengthObservable;
@property (nonatomic) BOOL eventFrequenceObservable;
@property (nonatomic) double interval;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)_frequencyAggregation:(id)a0;
- (void)onEventAccepted:(id)a0;
- (void)onEventStored:(id)a0;
- (void)onEventDropped:(id)a0 withError:(id)a1;
- (void)onEventUploaded:(id)a0;
- (id)executionQueue;
- (void).cxx_destruct;
- (void)commonInit;

@end
