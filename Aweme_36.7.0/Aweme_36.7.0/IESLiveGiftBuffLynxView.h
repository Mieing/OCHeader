@class NSString, IESLiveGiftBuffItem, IESLiveGiftBuffLynxViewModel, UIView;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftBuffLynxView : IESLiveGiftCheckWindowView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *giftBuffContainer;
@property (retain, nonatomic) IESLiveGiftBuffItem *buffItem;
@property (retain, nonatomic) IESLiveGiftBuffLynxViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)loadLynxView;
- (id)lynxDataWithViewModel:(id)a0 isFirstRender:(BOOL)a1;
- (void)removeCurrentLynxViewIfNeeded;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
