@class NSString;
@protocol IESLLLiveStrategyEventDispatcherObserver;

@interface IESLLLiveSmartStrategyObserverManager : NSObject <AWELiveStrategyEventDispatcherObserver>

@property (weak, nonatomic) id<IESLLLiveStrategyEventDispatcherObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (void).cxx_destruct;

@end
