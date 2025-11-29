@class UILabel, UIView;

@interface IESECSKUSpecTitleCell : UICollectionViewCell

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UILabel *specName;

+ (struct CGSize { double x0; double x1; })cellSizeWithTitle:(id)a0 WithType:(unsigned long long)a1;
+ (id)attributedText:(id)a0 fontSize:(double)a1 lineHeight:(double)a2;

- (void)updateCellWithTitle:(id)a0 WithType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
