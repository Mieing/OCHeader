@class NSString, UICollectionView, AWEIMSearchHistoryDatasource, UILabel, RxCollectionViewDiffableDataSource;
@protocol AWEIMSearchResultProtocol;

@interface AWEIMSearchHistoryViewController : UIViewController <UICollectionViewDelegate>

@property (nonatomic) BOOL needShow;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *cleanLabel;
@property (retain, nonatomic) UICollectionView *historyCollectionView;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) AWEIMSearchHistoryDatasource *historyDatasource;
@property (weak, nonatomic) id<AWEIMSearchResultProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reloadData;
- (void)p_cleanLabelTaped;
- (void)reapplyData;
- (void)p_setupUI;
- (void)reloadData;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
