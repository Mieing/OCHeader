@class NSString, NSHashTable;
@protocol IESGCPLiveStrategyEventDispatcherObserver;

@interface IESLiveGameCPStrategyDispatcher : NSObject <IESLiveStrategyEventDispatcherObserver>

@property (weak, nonatomic) id<IESGCPLiveStrategyEventDispatcherObserver> observer;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
