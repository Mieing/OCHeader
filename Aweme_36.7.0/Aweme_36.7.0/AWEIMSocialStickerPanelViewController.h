@class UIView, NSString, NSDictionary, UIImageView, AWEIMCodeGenV1IMEffectGameListResponseModel, UIButton, NSMutableArray, UIViewController, AWEIMSocialStickerDataSource, UICollectionView, UILabel;
@protocol AWEIMHalfScreenContainerVCProtocol;

@interface AWEIMSocialStickerPanelViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEIMHalfScreenContainerVCDelegate, AWEIMHalfScreenContainerScrollProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMSocialStickerDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *hasReportedPropsID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEIMCodeGenV1IMEffectGameListResponseModel *data;
@property (retain, nonatomic) UILabel *recentlyPlayedHeaderLabel;
@property (retain, nonatomic) UILabel *recommendHeaderLabel;
@property (weak, nonatomic) UIViewController<AWEIMHalfScreenContainerVCProtocol> *containerVC;
@property (nonatomic) unsigned long long conversationType;
@property (retain, nonatomic) UIView *emptyContainer;
@property (retain, nonatomic) UIImageView *emptyIcon;
@property (retain, nonatomic) UILabel *emptyTitle;
@property (retain, nonatomic) UILabel *emptySubtitle;
@property (retain, nonatomic) UIButton *emptyButton;
@property (nonatomic) struct CGSize { double width; double height; } recommendStickerCellSize;
@property (nonatomic) BOOL shouldShowEmptyPage;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (weak, nonatomic) UIViewController *chatVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)externalAssignTopDragHeight;
- (double)containerViewLayerCornerRadius;
- (BOOL)dismissGestureRecognizerShouldBegin;
- (void)createEmptyView;
- (id)sectionHeaderLabelWithTitle:(id)a0;
- (void)openCameraUseNewAPIWithModel:(id)a0;
- (void)trackCellClickWithModel:(id)a0 indexPath:(id)a1;
- (void)openCameraWithModel:(id)a0;
- (void)trackCellShowWithModel:(id)a0 indexPath:(id)a1;
- (struct CGSize { double x0; double x1; })recentlyPlayedStickerCellSize;
- (void)emptyButtonDidClicked;
- (void)createCollectionView;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)scrollView;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupData;
- (void)refreshData;

@end
