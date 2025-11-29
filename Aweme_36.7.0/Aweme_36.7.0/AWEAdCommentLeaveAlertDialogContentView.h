@class NSArray, UIImageView, UICollectionView, UILabel, NSString;

@interface AWEAdCommentLeaveAlertDialogContentView : UIView <DUXAlertDialogBodyView, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *tagList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configViews;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
