@class UILabel, UIButton, MASConstraint;

@interface IESLiveFunctionSquareCategorySectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) MASConstraint *xPostionCons;
@property (copy, nonatomic) id /* block */ descBlock;

+ (double)mainTitleFontSize;
+ (id)reuseIdentifier;

- (void)updateWithRowNode:(id)a0;
- (id)mainTitleFont:(BOOL)a0;
- (id)mainTitleColor:(BOOL)a0;
- (void)descButtonDidClick;
- (void)updateDescButtonHidden:(double)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
