@class MMScrollActionSheet, NSString, UICollectionView, UICollectionViewDiffableDataSource, ForwardMessageLogicController, WCFinderCollectionDetailViewModel;

@interface WCFinderCollectionDetailViewController : MMUIViewController <UICollectionViewDelegate, WCFinderCollectionDetailViewModelDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderCollectionDetailViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) MMScrollActionSheet *shareActionSheet;
@property (retain, nonatomic) ForwardMessageLogicController *forwardController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShareItem:(id)a0;
- (id)initWithCollectionInfo:(id)a0 authorUsername:(id)a1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (void)updateNavigationBar;
- (void)_setupCollectionView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_pushToAuthorProfile;
- (void)_pushToLegalH5Page;
- (void)_onBackButtonClicked:(id)a0;
- (void)_onMoreButtonClicked:(id)a0;
- (void)_favoritesCollection;
- (BOOL)_showErrorMessageIfNeed;
- (void)_showForwardActionSheet;
- (void)_pushToComplaintWebview;
- (void)_shareToChat:(id)a0;
- (void)_shareToMoment;
- (id)_forwardMessage;
- (id)_momentItem;
- (id)_shareItem;
- (id)_uploadTask;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewModel:(id)a0 generatingEvent:(unsigned long long)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)scrollActionSheetDidCancel:(id)a0;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (void)_reportShareSheetItemEvent:(id)a0 viewID:(id)a1;
- (void)_reportForwardWithController:(id)a0 result:(unsigned long long)a1;
- (void).cxx_destruct;

@end
