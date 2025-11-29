@class NSString;

@interface RxOperationBlockObserver : NSObject <RxOperationObserver>

@property (copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ produceHandler;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blockObserverWithStartHandler:(id /* block */)a0 produceHandler:(id /* block */)a1 finishHandler:(id /* block */)a2;
+ (id)blockObserverWithStartHandler:(id /* block */)a0 produceHandler:(id /* block */)a1;
+ (id)blockObserverWithStartHandler:(id /* block */)a0;
+ (id)blockObserverWithStartHandler:(id /* block */)a0 finishHandler:(id /* block */)a1;
+ (id)blockObserverWithProduceHandler:(id /* block */)a0;
+ (id)blockObserverWithProduceHandler:(id /* block */)a0 finishHandler:(id /* block */)a1;
+ (id)blockObserverWithFinishHandler:(id /* block */)a0;

- (void)operation:(id)a0 didFinishedWithErrors:(id)a1;
- (void)operation:(id)a0 didProduceOperation:(id)a1;
- (id)initWithStartHandler:(id /* block */)a0 produceHandler:(id /* block */)a1 finishHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)operationDidStart:(id)a0;

@end
