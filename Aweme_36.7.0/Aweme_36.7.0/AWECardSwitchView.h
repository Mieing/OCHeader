@class NSArray, UICollectionView, AWECardCellFactory, NSString;
@protocol AWECardSwitchViewDelegate;

@interface AWECardSwitchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEDataConfigProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) id extraInfo;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long dragAtIndex;
@property (nonatomic) long long proposedIndexPath;
@property (retain, nonatomic) AWECardCellFactory *cellFactory;
@property (weak, nonatomic) id<AWECardSwitchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setData:(id)a0 extraInfo:(id)a1;
- (void)addCollectionView:(id)a0;
- (void)afterScroll;
- (void)performClickDelegateMethod;
- (void)updateSelectedIndex:(id)a0;
- (void)performScrollDelegateMethod;
- (id)initWithFlowLayout:(id)a0 cellFactory:(id)a1;
- (void)switchToIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (id)identifier;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollToSelectedItemAnimated:(BOOL)a0;

@end
