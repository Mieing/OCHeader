@class NSString, UICollectionView, UIView, WAAuthManagerListContainerViewModel, ZZFLEXAngel;

@interface WAAuthManagerListContainerCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) WAAuthManagerListContainerViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateMaskView;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
