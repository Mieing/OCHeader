@class RACCompoundDisposable, IESLiveFunctionSquareRowNode, UIImageView, UILabel, UIView, HTSPaddingLabel;

@interface IESLiveFunctionSquareInteractEntranceCollectionViewCell : IESLiveFunctionSquareCollectionCell

@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) HTSPaddingLabel *redDotLabel;
@property (retain, nonatomic) RACCompoundDisposable *compoundDisposable;
@property (retain, nonatomic) IESLiveFunctionSquareRowNode *rowNode;

+ (double)minimumInteritemSpacing:(id)a0 dataCount:(unsigned long long)a1;
+ (double)minimumLineSpacing:(id)a0 dataCount:(unsigned long long)a1;
+ (double)columnSpaceForInteractiveGame:(id)a0 dataCount:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;

- (void)updateWithRowNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
