@class IESLivePrivilegeEntranceWealthViewModel, NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePrivilegeEntranceWealthView : UIView <IESHYHybridViewLifecycleProtocol>

@property (nonatomic) BOOL showGuestInfo;
@property (retain, nonatomic) IESLivePrivilegeEntranceWealthViewModel *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *dynamicWealthViewContainer;
@property (copy, nonatomic) id /* block */ viewFrameChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)routerParams;
- (void)bindObserver;
- (void)loadLynxView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 showGuestInfo:(BOOL)a2 viewFrameChanged:(id /* block */)a3;
- (void)monitorWealthLoadError:(id)a0;
- (void).cxx_destruct;

@end
