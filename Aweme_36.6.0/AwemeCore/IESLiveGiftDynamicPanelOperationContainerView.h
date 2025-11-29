@class NSString, IESLiveGiftDynamicPanelOperationViewModel, UIView;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftDynamicPanelOperationContainerView : UIView <IESLiveRefactGiftPanelSectionViewProtocol, IESLiveGiftDynamicPanelOperationViewModelDelegate>

@property (retain, nonatomic) IESLiveGiftDynamicPanelOperationViewModel *viewModel;
@property (retain, nonatomic) UIView *privilegeView;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadPrivilege;
- (void)removePrivilege;
- (void)viewModel:(id)a0 showPrivilege:(BOOL)a1;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
