@class IESECLiveGoodsListTabSlideLayout, UIView, NSArray, UIImage, IESECLiveGoodsListTabEnhanceHandler, IESECLiveSelectItemUIConfig, NSString, IESECLiveTabExpandActionView, CAGradientLayer, UICollectionView, NSMutableSet, IESECLiveGoodsListTabSearch;
@protocol IESECLiveGoodsListExpandTabDelegate, IESECLiveGoodsListTabDelegate;

@interface IESECLiveGoodsListTab : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) BOOL multiLines;
@property (nonatomic) BOOL tabFold;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) IESECLiveGoodsListTabSearch *searchView;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UICollectionView *slideTabCollectionView;
@property (retain, nonatomic) IESECLiveGoodsListTabSlideLayout *slideLayout;
@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLiveTabExpandActionView *foldOrExpandInfoView;
@property (retain, nonatomic) CAGradientLayer *showMoreButtonLayer;
@property (retain, nonatomic) NSMutableSet *registerIDs;
@property (retain, nonatomic) UIImage *unSelectedBgImage;
@property (retain, nonatomic) UIImage *selectedBgImage;
@property (retain, nonatomic) IESECLiveGoodsListTabEnhanceHandler *tabEnhanceHandler;
@property (weak, nonatomic) id<IESECLiveGoodsListTabDelegate> delegate;
@property (weak, nonatomic) id<IESECLiveGoodsListExpandTabDelegate> expandTabDelegate;
@property (nonatomic) BOOL disableTabWithoutAll;
@property (retain, nonatomic) IESECLiveSelectItemUIConfig *skinConfig;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL useSearchButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moreClicked;
- (void)setContainerBgColor:(id)a0;
- (void)updateSelectedIndex:(long long)a0;
- (void)resetToInitial;
- (void)listViewClosed;
- (BOOL)hiddenSearchButton;
- (void)p_showSearchView;
- (void)updateSearchViewShadow;
- (void)p_delegateTrackAllTabModels;
- (void)setupCellBgImage;
- (void)scrollViewToIndexIfNeeded:(long long)a0;
- (void)p_delegateTrackShowAtIndex:(long long)a0 withTabModel:(id)a1;
- (id)tabModelWithIndexPath:(id)a0;
- (id)fontWithTabModel:(id)a0 isSelectedStatus:(BOOL)a1;
- (double)cellItemMinW;
- (double)cellItemLeftPadding:(long long)a0;
- (double)cellItemRightPadding:(long long)a0;
- (void)setupCellSkin:(id)a0 isSelectedStatus:(BOOL)a1 tabModel:(id)a2;
- (double)cellItemPadding;
- (void)searchClicked;
- (void)setupTabModels:(id)a0 selectedIndex:(long long)a1;
- (id)currentSelectedTabItemView;
- (void)updateTabWithFold:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
