@class NSMutableDictionary, NSPointerArray, NSHashTable, NSString;

@interface ACCCameraMeasureSubscription : NSObject <ACCCameraSubscription, ACCCameraSubscriptionMeasureCapability, ACCCameraSubscriptionPerformCapability>

@property (nonatomic) BOOL isStrongMemory;
@property (nonatomic) BOOL isOrderly;
@property (retain, nonatomic) NSPointerArray *orderlySubscribers;
@property (retain, nonatomic) NSHashTable *disorderlySubscribers;
@property (retain, nonatomic) NSMutableDictionary *costDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performEventSelector:(SEL)a0 realPerformer:(id /* block */)a1;
- (void)make:(id)a0;
- (id)costWithTopN:(long long)a0 forSelector:(SEL)a1;
- (id)initWithStrongMemory:(BOOL)a0 orderly:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
