@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AWESimpleContainer : NSObject

@property (retain, nonatomic) AWESimpleContainer *parent;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSMutableDictionary *messages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;

- (id)resolveObject:(id)a0;
- (id)initWithParentContainer:(id)a0;
- (void)registerWeakInstance:(id)a0 forProtocol:(id)a1;
- (void)registerRetainedInstance:(id)a0 forProtocol:(id)a1;
- (void)registerRetainedInstance:(id)a0 forClass:(Class)a1;
- (id)stringFromClassOrProtocol:(id)a0;
- (id)getObservers:(id)a0;
- (void)registerWeakInstance:(id)a0 forClass:(Class)a1;
- (void)addObserver:(id)a0 forMessage:(id)a1;
- (void)removeObserver:(id)a0 forMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
