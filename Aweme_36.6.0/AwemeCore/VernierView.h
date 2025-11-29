@class UICollectionView, UIView, NSLayoutConstraint;

@interface VernierView : UIView

@property (retain, nonatomic) NSLayoutConstraint *vernierBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *vernierHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *vernierLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *vernierWidthConstraint;
@property (weak, nonatomic) UICollectionView *associatedCollectionVIew;
@property (weak, nonatomic) UIView *associatedTabbarView;
@property (nonatomic) BOOL isFixedWidth;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double top;

- (id)initWithSuperView:(id)a0 tabbarView:(id)a1 vernierHeight:(double)a2 vernierWidth:(double)a3 vernierTop:(double)a4 color:(id)a5;
- (void)updateLocationToCenterX:(double)a0 width:(double)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
