@class NSMutableArray;

@interface UBBaseSignal : NSObject

@property (readonly, nonatomic) id fire;
@property (readonly, nonatomic) id fireForSignalObserver;
@property (retain, nonatomic) NSMutableArray *signalObservers;
@property (nonatomic) unsigned long long maxObservers;
@property (readonly) unsigned long long observerCount;
@property (copy, nonatomic) id /* block */ observerAdded;
@property (copy, nonatomic) id /* block */ observerRemoved;

- (id)initWithProtocol:(id)a0;
- (id)debugDescription;
- (id)addObserver:(id)a0 callback:(id /* block */)a1;
- (id)addObserver:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (id)addObserver:(id)a0 priority:(unsigned long long)a1 callback:(id /* block */)a2;
- (id)addObserver:(id)a0 queue:(id)a1 priority:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void)removeSignalObserver:(id)a0;
- (void)_purgeDeallocedListeners;
- (void)_fireNewData:(id)a0 forSignalObservers:(id)a1;
- (void)_fireData:(id)a0 forSignalObservers:(id)a1;
- (void).cxx_destruct;

@end
