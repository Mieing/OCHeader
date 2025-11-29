@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveKVOCenter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *observerMap;

+ (id)shared;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeObserver:(id)a0;

@end
