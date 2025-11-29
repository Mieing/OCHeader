@class NSString;

@interface IESLivePublisher : NSObject <IESLivePublisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zip:(id)a0;
+ (id)merge:(id)a0;
+ (id)combineLatest:(id)a0;

- (id)deliverOnMainThread;
- (id)subscribeNext:(id /* block */)a0;
- (id)combineLatestWith:(id)a0;
- (id)throttle:(double)a0;
- (id)subscribeNext:(id /* block */)a0 completed:(id /* block */)a1;
- (id)zipWith:(id)a0;
- (id)subscribeAssignment:(id)a0;
- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)merge:(id)a0;
- (id)map:(id /* block */)a0;
- (id)ignore:(id)a0;
- (id)distinctUntilChanged;
- (id)filter:(id /* block */)a0;
- (id)skip:(unsigned long long)a0;
- (id)takeUntil:(id)a0;

@end
