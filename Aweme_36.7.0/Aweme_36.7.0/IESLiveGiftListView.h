@class NSString, IESLiveGiftPageCollectionView;
@protocol IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftListView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveGiftPageCollectionView *pageCollectionView;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

@end
