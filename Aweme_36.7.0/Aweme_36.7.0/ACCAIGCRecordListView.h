@class ACCAIGCRecordListDataSource, UILabel, UIView, NSArray, NSString, UIButton, NSDictionary, UICollectionView, ACCAIGCRecordListHeaderView, ACCAIGCRecordListFooterView, DUXAlertDialog;
@protocol ACCAIGCRecordListView;

@interface ACCAIGCRecordListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ACCAIGCRecordListHeaderViewDelegate, ACCAIGCRecordListCollectionViewCellDetegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *selectLabel;
@property (retain, nonatomic) DUXAlertDialog *deleteAlertConfirmView;
@property (retain, nonatomic) DUXAlertDialog *newDeleteAlertConfirmView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIView *deleteContainView;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (nonatomic) long long hasDeletedCount;
@property (nonatomic) long long sectionForContentCell;
@property (nonatomic) long long modelArrayCountbeforeDelete;
@property (retain, nonatomic) ACCAIGCRecordListFooterView *footerView;
@property (retain, nonatomic) ACCAIGCRecordListHeaderView *headerView;
@property (retain, nonatomic) ACCAIGCRecordListDataSource *dataSource;
@property (retain, nonatomic) NSArray *modelArray;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<ACCAIGCRecordListView> delegate;
@property (nonatomic) BOOL isFromInspiration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteButtonClicked;
- (void)bindObserver;
- (BOOL)shouldUseAICreationUIStyle;
- (BOOL)shouldUseLightModeUI;
- (void)showDeleteAlertConfirmView;
- (void)deleteAlertViewDidSelect:(BOOL)a0;
- (void)recordListCellDidTapSelect:(id)a0;
- (void)selectLabelClickedInListView;
- (void)deleteButtonClickedInListView;
- (void)selectLabelClicked;
- (void)setupUGCFusionCreationHistoryUI;
- (void)reloadListView;
- (void)trackClickLoraAIRecordChoose;
- (void)updateStatusWithSelected:(BOOL)a0;
- (void)deleteAlertViewDidSelect:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackClickDeleteInspirationAIRecordButton:(long long)a0;
- (void)trackClickDeleteLoraAIRecordButton:(long long)a0;
- (void)trackRecordCard:(id)a0;
- (void)loadMoreHistory;
- (id)initWithDataSource:(id)a0 isFromInspiration:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
