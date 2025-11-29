@class NSArray, UICollectionView, AWEAwemeModel, NSString;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionVideoHorizontalView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double labelWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) double currentPlayTime;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (copy, nonatomic) id /* block */ clickVideoAbstractBtnBlock;
@property (nonatomic) long long selecteIndex;
@property (readonly, nonatomic) double offsetX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hitChapterUIOptimizeExp;
+ (BOOL)hitMultiClicksResetPlayExp;

- (double)cellWidthWithString:(id)a0;
- (void)updateSectionBtnWithPlayTime:(double)a0 completion:(id /* block */)a1;
- (void)updateWithModel:(id)a0 LabelWidth:(double)a1 hasClicked:(BOOL)a2;
- (id)formattedJumpTimeForTime:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
