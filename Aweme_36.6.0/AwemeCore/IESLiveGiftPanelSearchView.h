@class IESLiveGiftSearchItem, NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftPanelSearchView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveGiftListCollectionViewDelgate, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveGiftSearchItem *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOperationExpand;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

@end
