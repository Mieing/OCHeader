@class UIColor, NSArray, UICollectionView, NSString;
@protocol WCFinderProfileServiceViewDelegate;

@interface WCFinderProfileServiceView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIColor *privateThemeColor;
@property (retain, nonatomic) NSArray *jumpInfos;
@property (nonatomic) long long columnCount;
@property (nonatomic) struct CGSize { double width; double height; } lastTestSize;
@property (nonatomic) struct CGSize { double width; double height; } lastSizeThatFitSize;
@property (weak, nonatomic) id<WCFinderProfileServiceViewDelegate> delegate;
@property (retain, nonatomic) UIColor *themeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithJumpInfos:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
