@class NSArray, UICollectionView;

@interface IESECSKUInstallmentCell : UICollectionViewCell

@property (nonatomic) unsigned long long lastSelectedIndex;
@property (retain, nonatomic) NSArray *installmentItemArray;
@property (nonatomic) BOOL canSelectInstallment;
@property (retain, nonatomic) UICollectionView *collectionView;

- (void)configureUIWithInstallment:(id)a0 canSelect:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
