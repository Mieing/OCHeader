@class NSString;

@interface IESLiveBlockSubscription : NSObject <IESLiveSubscription>

@property (copy, nonatomic) id /* block */ disposeCallback;
@property (getter=isDisposed) BOOL disposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisposeCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispose;

@end
