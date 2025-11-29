@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject

@property (weak, nonatomic) BFCancellationToken *token;
@property (copy, nonatomic) id /* block */ cancellationObserverBlock;
@property (retain, nonatomic) NSObject *lock;
@property (nonatomic) BOOL disposed;

+ (id)registrationWithToken:(id)a0 delegate:(id /* block */)a1;

- (void)throwIfDisposed;
- (void).cxx_destruct;
- (id)init;
- (void)dispose;
- (void)notifyDelegate;

@end
