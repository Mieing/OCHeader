@class BDXBridgeEventSubscriber;

@interface AWECommentLynxCreateCommentManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (void)__subscribeEvents;
- (void)__unsubscribeEvents;
- (void)__forwardCreateCommentWithDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
