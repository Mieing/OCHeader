@class NSString, AWEListenFeedInteractionContext, UIView, UIViewController;
@protocol AWEListenFeedPlayControlViewDelegate, AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionBaseElement : NSObject <AWEListenFeedInteractionDispatcherProtocol>

@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol, AWEListenFeedPlayControlViewDelegate> *container;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)playerViewController;
- (void).cxx_destruct;
- (long long)index;
- (void)viewDidLoad;
- (id)viewModel;
- (void)dealloc;
- (id)context;

@end
