@class NSString, IRISDelegateInterceptor;

@interface IRISDelegateProxy : NSProxy <UITableViewDelegate, UICollectionViewDelegate>

@property (readonly, weak, nonatomic) id delegate;
@property (retain, nonatomic) IRISDelegateInterceptor *interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
