@class IESECRelationActivityDynamicModel, NSString, IESECRelationForwardView, NSDictionary, UIView, NSMutableArray, UIViewController;
@protocol IESECRelationFloatLynxContainerControllerDelegate;

@interface IESECRelationFloatLynxContainerController : NSObject <IESECWinFloatLynxContainerDelegate, IESECWinFloatNativeContainerViewDelegate> {
    BOOL _isShow;
    BOOL _needRefreshWhenShow;
    IESECRelationActivityDynamicModel *_activityDynamicModel;
}

@property (retain, nonatomic) NSMutableArray *floatLynxContainerArray;
@property (retain, nonatomic) IESECRelationForwardView *lowPriorityFloatView;
@property (retain, nonatomic) IESECRelationForwardView *highPriorityFloatView;
@property (retain, nonatomic) NSMutableArray *needHiddenfloatLynxContainerArray;
@property (retain, nonatomic) UIView *rootView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (retain, nonatomic) NSDictionary *metaInfo;
@property (weak, nonatomic) UIViewController *container;
@property (weak, nonatomic) id<IESECRelationFloatLynxContainerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithModel:(id)a0;
- (void)lynxView:(id)a0 onSetup:(id)a1;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)exitShop;
- (void)__createFloatLynxContainerWithHomeModules:(id)a0 inLowPriorityView:(BOOL)a1;
- (void)__createFloatLynxContainer:(id)a0;
- (void)marketingSDKLoadComplete:(id)a0;
- (void)__subscribeFE;
- (void)__unSubscribeFE;
- (void)tracker:(id)a0 extraParams:(id)a1;
- (void)didFinishLoadFloatLynxContainer:(id)a0;
- (void)didFailedLoadFloatLynxContainer:(id)a0;
- (void)closeFloatLynxContainer:(id)a0 withRecord:(BOOL)a1;
- (BOOL)shopContentViewControllerSwitchToTabType:(long long)a0;
- (void)hideLowPriorityFloatViewAnimated:(BOOL)a0;
- (void)showLowPriorityFloatViewAnimated:(BOOL)a0;
- (void)openNeedHiddenFloatView;
- (void)closeNeedHiddenFloatView;
- (void)sendEvent:(id)a0 eventName:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)subscribe;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
