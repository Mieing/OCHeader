@class NSString, UICollectionViewDiffableDataSource, UICollectionView, WCFinderInteractionCommentRecordViewModel, WCFinderDataLoadTips;

@interface WCFinderInteractionCommentRecordViewController : MMUIViewController <UICollectionViewDelegate, WCFinderInteractionCommentRecordViewModelDelegate, WCFinderDataLoadTipsDelegate>

@property (retain, nonatomic) WCFinderInteractionCommentRecordViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) WCFinderDataLoadTips *loadingTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetUserName:(id)a0 displayName:(id)a1;
- (void)viewDidLoad;
- (void)_setupCollectionView;
- (void)_setupLoadingTips;
- (id)navigationBarBackgroundColor;
- (void)registerYReportSdk;
- (void)_pushMentionDetailViewController;
- (void)_reloadData;
- (void)viewModel:(id)a0 sendEvent:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
