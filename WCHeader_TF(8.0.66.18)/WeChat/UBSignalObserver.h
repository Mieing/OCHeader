@class NSOperationQueue, UBBaseSignal;

@interface UBSignalObserver : NSObject

@property (weak, nonatomic) UBBaseSignal *signal;
@property (readonly, weak, nonatomic) id observer;
@property (readonly, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL cancelsAfterNextFire;
@property (readonly, nonatomic) unsigned long long priority;

- (id)initWithSignal:(id)a0 observer:(id)a1 queue:(id)a2 callback:(id /* block */)a3 priority:(unsigned long long)a4;
- (id)debugDescription;
- (void)cancel;
- (void).cxx_destruct;

@end
