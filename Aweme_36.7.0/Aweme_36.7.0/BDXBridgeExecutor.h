@class NSCache, NSString;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeExecutor : NSObject <BDXBridgeExecutorProtocol>

@property (class, weak, nonatomic) Class lazyRegister;

@property (retain, nonatomic) NSCache *handleMethodNameCache;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandleMessage:(id)a0;
- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id /* block */)callHandlerWithMessage:(id)a0;
- (BOOL)useMainThreadHandleMessage:(id)a0;
- (void)updateMessageNamespace:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
