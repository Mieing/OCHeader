@class NSArray, NSString, UICollectionView;
@protocol WCFinderPreviewFeedHorizontallyViewDelegate;

@interface WCFinderPreviewFeedHorizontallyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCGeneralMonitorDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long maxCardNumInScreen;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL scrollEnabled;
@property (weak, nonatomic) id<WCFinderPreviewFeedHorizontallyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)feedCardHeightWithScreenWid:(double)a0 maxCardNumInScreen:(long long)a1;
+ (double)feedCardWidthWithScreenWid:(double)a0 maxCardNumInScreen:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxCardNumInScreen:(long long)a1 scrollEnabled:(BOOL)a2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)updateWithDataSource:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
