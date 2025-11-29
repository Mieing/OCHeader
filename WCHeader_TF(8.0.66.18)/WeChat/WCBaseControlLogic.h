@class NSString, NSMutableArray;
@protocol WCBaseControlLogicDeleagte, MMUIViewControllerDelegate;

@interface WCBaseControlLogic : MMObject <WCBaseControlLogicDeleagte, MMUIViewControllerExt> {
    NSMutableArray *m_arrVC;
}

@property (nonatomic) unsigned int m_tag;
@property (readonly, weak, nonatomic) id<MMUIViewControllerDelegate> m_vcRootDelegate;
@property (readonly, weak, nonatomic) id<WCBaseControlLogicDeleagte> m_logicDelegate;
@property (readonly, nonatomic) unsigned long long m_uiStartedTime;
@property (nonatomic) BOOL useGotoRootViewControllerV2;
@property (nonatomic) unsigned int m_uiLogicStatus;
@property (nonatomic) BOOL cancelDimissOrPopAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)startLogic;
- (void)stopLogic;
- (void)removeTopViewController;
- (void)removeFromViewController:(id)a0;
- (void)addTopViewController:(id)a0;
- (id)getLogicViewControllers;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)startLoading;
- (void)startLoadingWithTip:(id)a0;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(id)a0;
- (void)showLoadingOK:(id)a0;
- (void)showLoadingOK:(id)a0 withDelay:(double)a1;
- (void)showLoadingOK:(id)a0 withDelay:(double)a1 withCompletion:(id /* block */)a2;
- (void)showRedesignLoadingOK:(id)a0;
- (void)checkStopLogic;
- (void)dismissCurrentViewWithAnimated:(BOOL)a0;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(BOOL)a0;
- (void)presentViewController:(id)a0 Animated:(BOOL)a1 showNavigation:(BOOL)a2;
- (void)presentViewController:(id)a0 Animated:(BOOL)a1 showNavigation:(BOOL)a2 transitioningDelegate:(id)a3 forceFullScreen:(BOOL)a4;
- (void)pushViewController:(id)a0 Animated:(BOOL)a1;
- (void)presentViewController:(id)a0 Animated:(BOOL)a1;
- (void)pushViewController:(id)a0 Animated:(BOOL)a1 transitioningDelegate:(id)a2;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Title:(id)a2 HeadTip:(id)a3 Present:(BOOL)a4 Animation:(BOOL)a5;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Title:(id)a2 HeadTip:(id)a3 Present:(BOOL)a4;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Title:(id)a2 HeadTip:(id)a3;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2 Animation:(BOOL)a3;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2 showNavigation:(BOOL)a3 Animation:(BOOL)a4 forceFullScreen:(BOOL)a5;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2 Animation:(BOOL)a3 forceFullScreen:(BOOL)a4;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2 showNavigation:(BOOL)a3 Animation:(BOOL)a4 transitioningDelegate:(id)a5 forceFullScreen:(BOOL)a6;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Present:(BOOL)a2;
- (id)gotoViewController:(Class)a0 withData:(id)a1;
- (id)gotoViewController:(Class)a0 withData:(id)a1 Animation:(BOOL)a2;
- (void)setViewControllers:(id)a0 withData:(id)a1 Animation:(BOOL)a2;
- (void)gotoRootViewControllerWithAnimated:(BOOL)a0;
- (void)gotoRootViewControllerWithAnimatedV2:(BOOL)a0;
- (void)gotoRootViewControllerAndStopLogicWithAnimated:(BOOL)a0;
- (void)setRootViewControllerDelegate:(id)a0;
- (void)setlogicDelegate:(id)a0;
- (id)getCurrentViewController;
- (BOOL)onError:(id)a0;
- (BOOL)isLogicCompleteOK;
- (BOOL)isLogicCancel;
- (void)gotoLogicFirstViewControllerWithAnimation:(BOOL)a0;
- (void)dismissCurrentViewWithAnimatedV2:(BOOL)a0;
- (void).cxx_destruct;

@end
