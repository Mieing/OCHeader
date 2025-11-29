@class AWEPadLeftSideBarMiniGameCellDataModel, NSString, UIImageView, UICollectionView, UILabel, UIView, DUXBadge;
@protocol AWEPadLeftSideBarMiniGameGridViewDelegate, AWELeftSideBarItemContext;

@interface AWEPadLeftSideBarMiniGameGridView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *moreActionView;
@property (retain, nonatomic) UIImageView *moreActionArrowImageView;
@property (retain, nonatomic) DUXBadge *redDotView;
@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) AWEPadLeftSideBarMiniGameCellDataModel *dataModel;
@property (weak, nonatomic) id<AWEPadLeftSideBarMiniGameGridViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateGridCellContextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)updateGridCellContext:(id)a0 cellDataModel:(id)a1;
- (void)handleDidTapMiniGameCard;
- (void)configUIWithThemeType:(long long)a0;
- (void)setupImageViewWithUrl:(id)a0 imageView:(id)a1 completion:(id /* block */)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
