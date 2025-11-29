@class WCFinderCyclePagerView, NSArray, NSString, WCFinderCyclePagerFooterView;
@protocol WCFinderPCContinuePlayCollectionInfoCellDelegate;

@interface WCFinderPCContinuePlayCollectionInfoCell : UICollectionViewCell <WCFinderCyclePagerViewDelegate, WCFinderCyclePagerViewDataSource, WCFinderContinueCollectionPagerCellDelegate>

@property (retain, nonatomic) WCFinderCyclePagerView *cyclePagerView;
@property (retain, nonatomic) NSArray *continueCollectionModelArr;
@property (nonatomic) unsigned long long explicitCount;
@property (retain, nonatomic) WCFinderCyclePagerFooterView *footerView;
@property (nonatomic) BOOL hadLightShock;
@property (weak, nonatomic) id<WCFinderPCContinuePlayCollectionInfoCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;

- (void)updateWatchingCollectionModels:(id)a0 explicitCount:(unsigned long long)a1;
- (void)updateFooterType;
- (void)jumpToMore;
- (void)longPressCollectionInfoView:(id)a0;
- (long long)numberOfItemsInPagerView:(id)a0;
- (id)identifiersOfItemsInPagerView:(id)a0;
- (id)pagerView:(id)a0 cellForItemAtIndex:(long long)a1;
- (id)layoutForPagerView:(id)a0;
- (struct CGSize { double x0; double x1; })getSingleItemSize;
- (id)getCurFooterView;
- (unsigned long long)getCurPagerFooterViewType;
- (void)pagerView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)pagerView:(id)a0 updateReusableView:(id)a1;
- (void)pagerViewDidScroll:(id)a0;
- (void)pagerViewWillBeginDecelerating:(id)a0;
- (BOOL)beyondBufferArea:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;

@end
