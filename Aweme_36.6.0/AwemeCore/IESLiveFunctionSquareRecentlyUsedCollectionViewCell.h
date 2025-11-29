@class RACCompoundDisposable, IESLiveFunctionSquareRowNode, UIImageView, UILabel, UIView, HTSPaddingLabel;

@interface IESLiveFunctionSquareRecentlyUsedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *runningImageView;
@property (retain, nonatomic) UILabel *runningLabel;
@property (retain, nonatomic) UIImageView *bindImageView;
@property (retain, nonatomic) UILabel *bindLabel;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) HTSPaddingLabel *redDotLabel;
@property (retain, nonatomic) RACCompoundDisposable *compoundDisposable;
@property (retain, nonatomic) IESLiveFunctionSquareRowNode *rowNode;

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)updateWithRowNode:(id)a0 cellType:(long long)a1 liveStatus:(BOOL)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
