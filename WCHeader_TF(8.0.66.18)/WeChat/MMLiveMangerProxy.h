@class MMLiveManger;

@interface MMLiveMangerProxy : NSProxy

@property (retain, nonatomic) MMLiveManger *liveManager;

+ (Class)class;

- (id)initWithInstance:(id)a0;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
