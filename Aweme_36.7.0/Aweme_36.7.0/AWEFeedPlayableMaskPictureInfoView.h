@class NSString, AWEFeedPlayableMaskPictureInfoModel, UICollectionView, UILabel;

@interface AWEFeedPlayableMaskPictureInfoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFeedPlayableMaskPictureInfoModel *pictureInfo;
@property (copy, nonatomic) id /* block */ pictureDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)constraintSubviews;
- (BOOL)canHandleGestureInCell:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;

@end
