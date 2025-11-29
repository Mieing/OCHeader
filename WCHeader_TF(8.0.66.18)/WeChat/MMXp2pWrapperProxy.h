@class MMXp2pWrapper;

@interface MMXp2pWrapperProxy : NSProxy

@property (retain, nonatomic) MMXp2pWrapper *p2pManager;

+ (Class)class;

- (id)initWithInstance:(id)a0;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
