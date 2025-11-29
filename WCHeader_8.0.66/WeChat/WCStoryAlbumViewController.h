@class UIView, NSString, MMUILabel, UICollectionViewFlowLayout, WCMomentsPageContext, WCStoryAlbumViewModel, UICollectionView, WCStoryFloatTopBar, MMUIButton, WCStoryCollectionFooterView;

@interface WCStoryAlbumViewController : MMUIViewController <WCStoryCollectionFooterViewDelegate>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) WCStoryFloatTopBar *floatTopBar;
@property (retain, nonatomic) WCStoryCollectionFooterView *footerView;
@property (retain, nonatomic) UIView *blankView;
@property (retain, nonatomic) MMUIButton *fullTimelineButton;
@property (nonatomic) BOOL isNoMoreData;
@property (retain, nonatomic) MMUILabel *noDataLabel;
@property (retain, nonatomic) WCStoryAlbumViewModel *viewModel;
@property (readonly, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)setupData;
- (double)getCellWidth;
- (void)updateTipLabelState;
- (void)updateAlbumViewState;
- (void)updateFooterViewState;
- (void)onClickAction;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
