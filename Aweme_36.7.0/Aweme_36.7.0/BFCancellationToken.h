@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject

@property (retain, nonatomic) NSMutableArray *registrations;
@property (retain, nonatomic) NSObject *lock;
@property (nonatomic) BOOL disposed;
@property (readonly, nonatomic, getter=isCancellationRequested) BOOL cancellationRequested;

- (void)throwIfDisposed;
- (void)cancelPrivate;
- (void)notifyCancellation:(id)a0;
- (id)registerCancellationObserverWithBlock:(id /* block */)a0;
- (void)unregisterRegistration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispose;
- (void)cancel;
- (void)cancelAfterDelay:(int)a0;

@end
