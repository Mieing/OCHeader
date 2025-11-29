@class NSString;

@interface RACDisposable : NSObject <IESECLiveDisposable> {
    void *_disposeBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDisposed) BOOL disposed;

+ (id)disposableWithBlock:(id /* block */)a0;

- (id)asScopedDisposable;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void)dispose;
- (void)dealloc;

@end
