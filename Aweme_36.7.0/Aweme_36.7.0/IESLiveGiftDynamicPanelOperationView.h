@class NSString, IESLiveGiftDynamicPanelOperationViewModel, UIView, IESLiveGiftDynamicPanelDataSharingWrapper;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftDynamicPanelOperationView : IESLiveGiftCheckWindowView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *dynamicPanelContainer;
@property (retain, nonatomic) IESLiveGiftDynamicPanelOperationViewModel *viewModel;
@property (nonatomic) BOOL enableSingleLynx;
@property (nonatomic) BOOL fixGroupSend;
@property (retain, nonatomic) IESLiveGiftDynamicPanelDataSharingWrapper *dataSharingWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (id)lynxData;
- (void)updatePanelDataSharing:(id)a0;
- (void)loadLynxView;
- (void)removeCurrentLynxViewIfNeeded;
- (void)newLoadLynxView;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
