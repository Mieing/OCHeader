@class UICollectionViewCell, NSString, IESLiveGiftSmallRedeemView, IESLiveGiftTabListView, UIView, IESLiveGiftChargeView, IESLiveGiftAnchorPanelView;
@protocol IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol, IESLiveGiftPanelOperationCellService;

@interface IESLiveGiftPanelBottomView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) IESLiveGiftAnchorPanelView *anchorPanelCell;
@property (retain, nonatomic) IESLiveGiftChargeView *chargeCell;
@property (retain, nonatomic) IESLiveGiftSmallRedeemView *redeemCell;
@property (retain, nonatomic) UICollectionViewCell<IESLiveGiftPanelOperationCellService> *diamondCell;
@property (retain, nonatomic) IESLiveGiftTabListView *tabListCell;
@property (nonatomic) double topOffset;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)setupRightContainer:(id)a0;
- (void)setupTabListCell:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
