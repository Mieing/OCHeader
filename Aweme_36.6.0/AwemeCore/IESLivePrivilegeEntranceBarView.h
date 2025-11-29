@class IESLivePrivilegeEntranceBarViewModel, NSString, UIView;
@protocol IESHYContainerProtocol, IESLivePrivilegeEntranceViewProtocol, IESLiveSubscription, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLivePrivilegeEntranceBarView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveGiftPanelOuterSectionViewProtocol>

@property (nonatomic) BOOL giftPanelNewArchitecture;
@property (retain, nonatomic) IESLivePrivilegeEntranceBarViewModel *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *dynamicOperationContainer;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceViewProtocol> *privilegeButton;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (nonatomic) BOOL disableLynxForDynamicPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)routerParams;
- (void)loadLynxView;
- (void)showButtonAnimation;
- (id)currentLynxData;
- (void)removeCurrentLynxViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 giftPanelNewArchitecture:(BOOL)a2 needLoadLynxView:(BOOL)a3 disableLynxForDynamicPanel:(BOOL)a4;
- (void)updateLynxData;
- (void)updatePrivilegeButton;
- (void)loadPrivilegeButtonIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
