@class NSPointerArray, AWEMVChannelPageContext;

@interface AWEMVEventDispatcher : NSObject

@property (weak, nonatomic) AWEMVChannelPageContext *context;
@property (retain, nonatomic) NSPointerArray *eventObserversArray;

- (id)controllerArrayBySelector:(SEL)a0;
- (void)registerEventObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
