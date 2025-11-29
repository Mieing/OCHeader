@class NSString, UICollectionViewFlowLayout, UIImageView, UIButton, AWEVideoCoverEvaluateModel, UICollectionView, UILabel, NSIndexPath;

@interface AWEVideoCoverEvaluateAiCoverCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *coverCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UIButton *reloadButton;
@property (retain, nonatomic) UILabel *reloadLabel;
@property (retain, nonatomic) UIImageView *reloadIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSIndexPath *lastSelectIndexPath;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForEvaluateModel:(id)a0 status:(unsigned long long)a1;

- (void)initSubViews;
- (void)reloadButtonClick;
- (void)updateEvaluateStatus:(id)a0 status:(unsigned long long)a1;
- (BOOL)isNeedReloadButton;
- (void)rotate360DegreesWithDuration:(double)a0 view:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
