@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWECommerceMonitorService : HTSService <AWECommerceMonitorService>

@property (weak, nonatomic) AWEAwemeModel *curAwemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)blockAbnormalShowIfNeedWithAweme:(id)a0 componentView:(id)a1 contextBuilder:(id /* block */)a2;
- (BOOL)verifyIsAbnormalWithAweme:(id)a0;
- (id)collectViewTree:(id)a0 terminalView:(id)a1;
- (void)trackAbnormalAwemeEventWithContext:(id)a0;
- (BOOL)componentsAbnormalShowCanBlock;
- (void)trackBlockComponentsShowEventWithContext:(id)a0;
- (void)trackWithEvent:(id)a0 context:(id)a1 shouldSnap:(BOOL)a2;
- (void)sendSnapshotHookWithParams:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;

@end
