@class NSString, UICollectionView, IESLiveFaceEffectInstructionInfoModel, UILabel, UIButton;

@interface IESLiveFaceEffectInstructionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *tipTitleLabel;
@property (retain, nonatomic) IESLiveFaceEffectInstructionInfoModel *instructionInfoModel;
@property (nonatomic) double lastOffsetX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAction:(id)a0;
- (double)stepSpace;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupView;
- (void)updateWithModel:(id)a0;

@end
