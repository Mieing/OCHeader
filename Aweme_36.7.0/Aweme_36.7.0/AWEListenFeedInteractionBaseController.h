@class NSString, UIViewController, AWEListenFeedInteractionContext;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionBaseController : NSObject <AWEListenFeedInteractionDispatcherProtocol>

@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) AWEListenFeedInteractionContext *interactionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)playerViewController;
- (void).cxx_destruct;
- (long long)index;
- (id)view;
- (void)viewDidLoad;
- (id)viewModel;
- (void)dealloc;
- (id)context;

@end
