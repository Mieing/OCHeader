@class NSString, IESContainer;

@interface IESBlockDisposable : NSObject <IESDisposable>

@property (getter=isDisposed) BOOL disposed;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *relatedServiceKey;
@property (weak, nonatomic) IESContainer *serviceContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0 serviceKey:(id)a1 serviceContainer:(id)a2;
- (void).cxx_destruct;
- (void)dispose;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
