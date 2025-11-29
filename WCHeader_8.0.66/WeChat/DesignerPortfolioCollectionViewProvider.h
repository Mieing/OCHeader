@class UICollectionViewLayout, NSString, UICollectionView, UIView, MMLoadMoreCollectionView, NSMutableArray;
@protocol DesignerPortfolioCollectionViewProviderDelegate;

@interface DesignerPortfolioCollectionViewProvider : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, AffEmoticonDesignerPortfolioPackDataExt, DesignerPortfolioCellDelegate, EmoticonDesignerRichPortfolioCellDelegate>

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) MMLoadMoreCollectionView *collectionView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSMutableArray *emotionsList;
@property (nonatomic) BOOL isDisablingLoadMore;
@property (nonatomic) BOOL didReport;
@property (readonly, nonatomic) UICollectionView *displayView;
@property (weak, nonatomic) id<DesignerPortfolioCollectionViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDesignerUin:(unsigned int)a0 andLayout:(id)a1;
- (id)initWithDesignerUin:(unsigned int)a0;
- (void)dealloc;
- (unsigned char)shouldUseRichStyle;
- (void)initView;
- (void)setCollectionLayout:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didClickEmotionItem:(id)a0 withDelegate:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)performGetDesignerCGI;
- (void)removeExpiredEmoticonPackIfNeeded;
- (void)onFetchPackFinished;
- (void)onFetchPackFailed;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)OnRewardStoreItem:(id)a0;
- (void)OnOpenEmojiHalfScreen:(id)a0;
- (void)OnOpenDetailViewForItem:(id)a0;
- (void).cxx_destruct;

@end
