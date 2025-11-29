@class NSArray, UICollectionView, NSString, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEEcomImageSearchVideoContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (copy, nonatomic) NSArray *unitModelList;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) long long selectIndex;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (copy, nonatomic) id /* block */ clickImageBtnBlock;
@property (copy, nonatomic) id /* block */ showImageBtnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithInfoModel:(id)a0;
- (id)unitModelAtIndex:(long long)a0;
- (double)cellWidthWithString:(id)a0;
- (void)updateSectionBtnWithPlayTime:(double)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)reuseIdentifier;

@end
