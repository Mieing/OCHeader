@class NSMapTable, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_semaphore, ACCEditBeautyEffectDDData;

@interface ACCEditBeautyEffectDDManager : NSObject

@property (retain, nonatomic) id<ACCEditBeautyEffectDDData> data;
@property (copy, nonatomic) id /* block */ recorderCreator;
@property (retain) NSHashTable *subscribers;
@property (retain) NSMapTable *keypathObservers;
@property (retain) NSMapTable *triggerObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSMapTable *executors;
@property (retain) NSMapTable *delayExecutors;
@property (retain) NSArray *invocationQueue;

- (id)observeKeypath:(id)a0 block:(id /* block */)a1;
- (id)interfaceOf:(id)a0;
- (id)initWith:(id)a0 modules:(id)a1;
- (void)addImplementation:(id /* block */)a0 forActions:(id)a1;
- (void)addImplementation:(id /* block */)a0 forActions:(id)a1 into:(id)a2;
- (void)mergeAndNotify:(id)a0;
- (id)observeKeypaths:(id)a0 keys:(id)a1 block:(id /* block */)a2;
- (id)observeTriggers:(id)a0 block:(id /* block */)a1;
- (id)observeKeypaths:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
