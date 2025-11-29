@class CAGradientLayer, UILongPressGestureRecognizer, UICollectionView, NSString, UICollectionViewFlowLayout, NSMutableArray, MMUILabel;
@protocol TextStatePublishRecentUseIconViewDelegate;

@interface TextStatePublishRecentUseIconView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UILongPressGestureRecognizer *itemLongPressGesture;
@property (retain, nonatomic) NSMutableArray *privateRecentUseIconList;
@property (weak, nonatomic) id<TextStatePublishRecentUseIconViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubview;
- (void)initGradientLayer;
- (void)updateGradientLayer;
- (void)initLayout;
- (void)layoutSubviews;
- (void)initGesture;
- (void)setRecentUseIconList:(id)a0;
- (id)recentUseIconList;
- (void)setBounces:(BOOL)a0;
- (void)handleLongPressGesture:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
