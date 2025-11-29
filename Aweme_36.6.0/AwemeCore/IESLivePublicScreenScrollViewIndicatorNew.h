@class NSString, NSMutableArray, UICollectionView;
@protocol IESLivePublicScreenScrollViewIndicatorDelegate;

@interface IESLivePublicScreenScrollViewIndicatorNew : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HTSLivePluginLayoutView>

@property (nonatomic) long long selectedTab;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *indicatorItems;
@property (weak, nonatomic) id<IESLivePublicScreenScrollViewIndicatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedTextWithString:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)selectTab:(long long)a0;
- (void)showChannelRedDotIfNeeded;
- (void)showSquareRedDotIfNeeded;
- (void)updateWithPublicScreenArray:(id)a0;
- (id)initWithPublicScreenArray:(id)a0;
- (BOOL)redDotWithType:(long long)a0;
- (id)handleIndicatorItemDataWithPublicScreenArray:(id)a0;
- (double)calculateCollectionViewWidth;
- (id)sortingForTab;
- (double)cellWidthWithAttributedText:(id)a0;
- (id)attributedTextWithIndex:(long long)a0;
- (id)getCellWithTab:(long long)a0;
- (void)redDotChangeWithType:(long long)a0 shouldShow:(BOOL)a1;
- (id)squareRedDotShowTimesKey;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)viewType;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
