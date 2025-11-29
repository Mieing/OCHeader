@class NSMutableDictionary, NSPointerArray, AWEListenFeedInteractionContext, NSString, NSMutableArray, UIViewController;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionDispatcherManager : NSObject <AWEListenFeedInteractionDispatcherProtocol>

@property (retain, nonatomic) NSPointerArray *elementArray;
@property (retain, nonatomic) NSMutableArray *controllerArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerArrayBySelector:(SEL)a0;
- (id)aimControllerArray;
- (id)elementArrayBySelector:(SEL)a0;
- (id)arrayForSelectorUsingCache:(SEL)a0;
- (void)registerController;
- (void).cxx_destruct;
- (void)removeElement:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)registerElement:(id)a0;

@end
