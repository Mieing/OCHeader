@class NSString, AWEIMShareToSingleChatCardView;
@protocol AWEIMShareToSingleChatEventHandlerProtocol, AWEIMShareToSingleChatContentProviderProtocol;

@interface AWEIMShareToSingleChatViewController : UIViewController <AWEIMShareToSingleChatCardViewDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEIMShareToSingleChatCardView *cardView;
@property (retain, nonatomic) id<AWEIMShareToSingleChatContentProviderProtocol> contentProvider;
@property (retain, nonatomic) id<AWEIMShareToSingleChatEventHandlerProtocol> eventHandler;
@property (nonatomic) BOOL didPerformBackgroundAnimation;
@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (id)initWithContentProvider:(id)a0 eventHandler:(id)a1;
- (void)p_registNotification;
- (id)shareContentViewInShareToSingleCardView:(id)a0;
- (struct CGSize { double x0; double x1; })shareContentViewSizeInShareToSingleCardView:(id)a0;
- (void)shareToSingleCardView:(id)a0 didClickWithType:(unsigned long long)a1;
- (void)interrupShare;
- (void)cancelWhithoutTranferBack;
- (id)defaultShareContentView;
- (struct CGSize { double x0; double x1; })defaultShareContentViewSize;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)a0;

@end
