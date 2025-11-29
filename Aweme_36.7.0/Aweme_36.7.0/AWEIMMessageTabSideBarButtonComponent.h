@class NSObject, NSString, AWEIMMessageTabSideBarView;
@protocol AWELeftSideBarAmbienceObjectProtocol, AWEIMMessageTabPrivateChatMgrInterface;

@interface AWEIMMessageTabSideBarButtonComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWELeftSideBarEntranceViewModelProtocol, AWEIMMessageTabSideBarButtonComponent_Interface>

@property (nonatomic) BOOL hasAppear;
@property (retain, nonatomic) AWEIMMessageTabSideBarView *sideBarView;
@property (retain, nonatomic) NSObject<AWELeftSideBarAmbienceObjectProtocol> *ambienceObject;
@property (nonatomic) unsigned long long slidePanType;
@property (weak, nonatomic) id<AWEIMMessageTabPrivateChatMgrInterface> privateChatMgrService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)messageTabSideBarTransition_destinatedCanOpen;
- (unsigned long long)messageTabSideBarTransition_destinatedType;
- (id)messageTabSideBarTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)p_canShowPrivateChatMgr;
- (id)p_getSideBarHostParams;
- (void).cxx_destruct;

@end
