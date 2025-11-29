@class UIView, NSString, UITapGestureRecognizer, UITableView, NSMutableArray, UICollectionView, HTSLiveGestureStickersViewModel, UIActivityIndicatorView, UILabel;
@protocol IESLiveGestureStickerPopupViewDelegate, IESLiveToastFactory;

@interface IESLiveGestureStickerPopupView : HTSLivePopUpView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *firstLevelTableView;
@property (retain, nonatomic) UICollectionView *categoriesCollectionView;
@property (retain, nonatomic) UICollectionView *gesturesCollectionView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapRetryGes;
@property (weak, nonatomic) HTSLiveGestureStickersViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveToastFactory> toastFactory;
@property (nonatomic) unsigned long long selectedCategoryIdx;
@property (nonatomic) BOOL hasScrollToInitialPosition;
@property (retain, nonatomic) NSMutableArray *tipState;
@property (weak, nonatomic) id<IESLiveGestureStickerPopupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)containerViewHeight;
- (void)setupLoadingView;
- (void)showTip:(id)a0;
- (void)loadSuccessfully;
- (id)makeHeaderView;
- (void)updateGesturesCollectionViewPosition;
- (void)setupContainerView;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)retry;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)setSelectedIndexPath:(id)a0;
- (void)showErrorView;
- (double)tableViewHeight;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
