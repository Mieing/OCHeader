@class NSString, UIViewController, UIView;
@protocol AWEIMQuickReplyControllerHandlerPortocol, AWEAntiAddictedNoticeBarViewProtocol, AWEIMShareModelProtocol;

@interface AWEPlayInteractionNewShareAndMsgNoticeElement : AWEPlayInteractionRightElement <AWEPadUIAdaptionViewTransitionObserver, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEAntiAddictedNoticeBarViewProtocol> *antiAddictedNoticeBarView;
@property (weak, nonatomic) UIViewController *topViewController;
@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)viewController_willDisplay;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)showSuccessShareVideoNoticeBar:(id)a0;
- (void)hideNoticeBarImmediately;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)shareFriendText;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;

@end
