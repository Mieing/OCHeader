@class __RxKVOObserver, NSString, __RxBlockKVOController, NSObject;

@interface __RxBlockKVOToken : NSObject <RxKeyValueObservation>

@property (readonly, nonatomic) NSObject *owner;
@property (weak, nonatomic) __RxBlockKVOController *controller;
@property (readonly, nonatomic) __RxKVOObserver *observer;
@property (readonly, getter=isInvalidated) BOOL invalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateImmediately;
- (id)initWithOwner:(id)a0 observer:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
