@class UIView, NSString, IESLiveAssociateHeadVideoFounctionDetailView, IESLiveAssociateHeadVideoSelectViewModel, UIButton, IESLiveAssociateHeadVideoSelectCollectionView, NSMutableSet, IESLiveAssociateHeadVideoSelectModel, UILabel;

@interface IESLiveAssociateHeadVideoSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveAssociateHeadVideoSelectProtocol>

@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectViewModel *viewModel;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectModel *selectInfo;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFounctionDetailView *foundationView;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectCollectionView *collectionView;
@property (retain, nonatomic) UIView *actionBarContainer;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *bannerView;
@property (nonatomic) BOOL firstSelect;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSMutableSet *showModels;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionButtonClicked:(id)a0;
- (void)onBackButtonTapped;
- (void)showActionButton:(BOOL)a0;
- (void)reloadDataWithSelect:(BOOL)a0;
- (void)tapDetailImage:(id)a0;
- (void)loadActionBar;
- (void)loadCollectionView;
- (void)hideBannerWithAnimation;
- (void)trackEvent:(id)a0 withVideoID:(id)a1 isActionButton:(BOOL)a2;
- (void)addErrorReloadView;
- (void)addDataEmptyRemindView;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)showWorkListView:(BOOL)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;

@end
