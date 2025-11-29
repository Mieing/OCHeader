@class NSString, NSMutableDictionary, RxScheduler, NSError, NSMutableArray;
@protocol RxInjector;

@interface RTVQosNode : NSObject

@property (readonly, nonatomic) NSMutableDictionary *data;
@property (readonly, nonatomic) NSMutableArray *finishObservers;
@property (nonatomic) long long state;
@property (nonatomic) double startTimeInterval;
@property (copy, nonatomic) NSString *service;
@property (readonly, nonatomic) NSError *finishError;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, copy, nonatomic) NSString *key;

- (void)rxAwakeFromPropertyInjection;
- (id)durationKey;
- (void)finishWithError:(id)a0 extraMonitorInfo:(id)a1;
- (id)monitorData;
- (void)updateReportService:(id)a0;
- (void)appendMonitorData:(id)a0;
- (id)initWithKey:(id)a0 initialData:(id)a1;
- (void)addStateFinishObserver:(id /* block */)a0;
- (void)doFinishWithError:(id)a0 extraMonitorInfo:(id)a1 async:(BOOL)a2;
- (void)__notifyFinishWithError:(id)a0;
- (void)__reportDataIfNeeded:(id)a0;
- (id)__metricFromData:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (id)statusKey;

@end
