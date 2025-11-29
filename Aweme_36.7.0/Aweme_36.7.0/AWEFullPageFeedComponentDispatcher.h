@class Protocol, AWEShellControllerManager;

@interface AWEFullPageFeedComponentDispatcher : NSObject

@property (weak, nonatomic) AWEShellControllerManager *manager;
@property (retain, nonatomic) Protocol *currentProtocol;

+ (BOOL)enableDispatchForType:(id)a0;

- (id)initWithManager:(id)a0 protocolType:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
