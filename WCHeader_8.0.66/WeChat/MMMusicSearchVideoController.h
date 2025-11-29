@class NSString, UICollectionViewFlowLayout, MMMusicSearchVideoInitParams, MMUISearchBar, MMMusicSearchVideoDataProvider, MMMusicPostVideoCollectionFooterCell, UICollectionView, MMUIActivityIndicatorView;
@protocol MMMusicSearchVideoControllerDelegate, MMMusicSearchVideoControllerDataSource;

@interface MMMusicSearchVideoController : NSObject <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMMusicSearchVideoDataProviderDelegate, MMMusicPostVideoCollectionCellDelegate> {
    MMMusicSearchVideoInitParams *_initParams;
    MMUISearchBar *_searchBar;
    UICollectionView *_listView;
    UICollectionViewFlowLayout *_flowLayout;
    MMMusicSearchVideoDataProvider *_dataProvider;
    MMUIActivityIndicatorView *_loadingView;
    MMMusicPostVideoCollectionFooterCell *m_footerView;
    BOOL m_continueFlag;
    double _minVideoDuration;
}

@property (weak, nonatomic) id<MMMusicSearchVideoControllerDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicSearchVideoControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHostView:(id)a0 initParams:(id)a1;
- (id)searchBar;
- (id)listView;
- (id)loadingView;
- (void)setSearchBarHidden:(BOOL)a0;
- (void)enterSearchMode;
- (void)resignSearchBarFirstResponder;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (void)updateCanMultiSelect:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)onDataChanged:(BOOL)a0 isClearAll:(BOOL)a1;
- (void)mmMusicPostVideoCollectionCell:(id)a0 onSelectedBtnClicked:(id)a1;
- (BOOL)isSelectedWithModel:(id)a0;
- (void).cxx_destruct;

@end
