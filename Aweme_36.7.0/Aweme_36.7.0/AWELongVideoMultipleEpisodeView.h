@class UIStackView, UIView, NSArray, NSString, AWEListDataController, UIImageView, AWELandscapeCellContext, DUXDivider, UICollectionView, DUXButton, AWELandscapePageContext, UILabel;
@protocol AWELongVideoDataControllerProtocol, AWELandscapeLVideoAlbumViewDelegate;

@interface AWELongVideoMultipleEpisodeView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *updateTimeLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIStackView *guideContainer;
@property (retain, nonatomic) UIImageView *guideIcon;
@property (retain, nonatomic) UILabel *guideTitle;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEListDataController<AWELongVideoDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWELandscapeCellContext *cellContext;
@property (copy, nonatomic) NSArray *episodeList;
@property (copy, nonatomic) NSString *titleUnit;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) DUXButton *buyButton;
@property (retain, nonatomic) Class longVideoUtil;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (weak, nonatomic) id<AWELandscapeLVideoAlbumViewDelegate> delegate;
@property (nonatomic) BOOL isEpisodePanelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToLocatedCell;
- (void)trackPurchaseFullEpisodeWithEvent:(id)a0;
- (void)updateWithPageContext:(id)a0 cellContext:(id)a1;
- (void)addPanelBottomPaymentBtnIfNeeded;
- (void)didClickBuyButtonAction;
- (void)addPanelTopPaymentTagIfNeeded:(id)a0;
- (BOOL)isAppointmentVideo;
- (void)showXiguaGuideTitleIfNeeded;
- (void)setBuyButtonTitleWithAlbumInfo:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
