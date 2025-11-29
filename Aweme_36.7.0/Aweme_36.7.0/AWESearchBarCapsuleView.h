@class UIColor, NSArray, UICollectionView, NSString, NSNumber;
@protocol AWESearchBarCapsuleViewDelegate;

@interface AWESearchBarCapsuleView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<AWESearchBarCapsuleViewDelegate> delegate;
@property (retain, nonatomic) NSNumber *capsuleCornerRadius;
@property (retain, nonatomic) UIColor *capsuleBkgColor;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIColor *capsuleTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTexts:(id)a0;
- (void)capsuleDidTap:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
