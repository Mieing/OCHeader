@protocol UIViewControllerTransitioningDelegate;

@interface FullScreenViewController : WCDragToCloseViewController {
    BOOL m_allowAutorotate;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> m_TransitioningDelegate;
@property (nonatomic) BOOL shouldCheckInterfaceOrientations;

- (void)viewWillBePresented:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (void)showTransitioningAnimationCompleted;
- (unsigned long long)supportedInterfaceOrientations;
- (void)forwardVideoToFriend:(id)a0;
- (void)presentedInViewController:(id)a0 forceFullScreen:(BOOL)a1 animated:(BOOL)a2 pushAvaliable:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
