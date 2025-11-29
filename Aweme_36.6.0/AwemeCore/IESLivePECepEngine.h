@class NSString, NSTimer, NSDictionary, NSObject;
@protocol OS_dispatch_queue, IESLivePECepNfaDelegate;

@interface IESLivePECepEngine : NSObject <IESLivePECepNfaDelegate, IESLivePEEventObserver> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _data_rwlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDictionary *nfaDic;
@property (copy) NSDictionary *subscriberDic;
@property (weak, nonatomic) id<IESLivePECepNfaDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (void)startTimerWith:(double)a0;
- (void)doTimerAction;
- (void)registerPatterns:(id)a0 canCover:(BOOL)a1;
- (void)trackPatternsLoadCostTime:(double)a0 patternsCount:(long long)a1;
- (void)loadPatternsWith:(id /* block */)a0;
- (void)resetCepNfa:(long long)a0;
- (void)inProcessQueue:(id /* block */)a0;
- (void)nfa:(id)a0 didMatches:(id)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWith:(id)a0;

@end
