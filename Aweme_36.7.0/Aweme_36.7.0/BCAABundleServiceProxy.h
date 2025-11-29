@class NSBundle, Protocol;

@interface BCAABundleServiceProxy : NSProxy

@property (retain, nonatomic) id target;
@property (weak, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) Protocol *proto;

- (id)initWithTarget:(id)a0 bundle:(id)a1 proto:(id)a2;
- (BOOL)isNSObjectSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
