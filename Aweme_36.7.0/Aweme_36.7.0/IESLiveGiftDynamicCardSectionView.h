@class NSString, IESLiveGiftDynamicCardSectionViewModel, UIView;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftDynamicCardSectionView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *dynamicOperationContainer;
@property (retain, nonatomic) IESLiveGiftDynamicCardSectionViewModel *viewModel;
@property (nonatomic) BOOL lynxViewLoadFinished;
@property (copy, nonatomic) id /* block */ pendingLynxDataUpdateBlock;
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
- (void)updateLynxData:(id)a0;
- (void)bindAction;
- (void)removeCurrentLynxViewIfNeeded;
- (id)lynxDataWithModel:(id)a0 isFirstRender:(BOOL)a1;
- (void)trackDynamicCardShowWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
