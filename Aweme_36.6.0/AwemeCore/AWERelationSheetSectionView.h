@class UILabel, UIView;

@interface AWERelationSheetSectionView : UIStackView

@property (retain, nonatomic) UIView *headerContentView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *footerContentView;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UIView *contentView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentView:(id)a0;

@end
