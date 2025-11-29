@class UIStackView, IESECHighlightButton, IESECSKUNumberViewModel, UILabel;
@protocol IESECSKUNumberCellDelegate;

@interface IESECSKUNewNumCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *stockLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) IESECHighlightButton *minusButton;
@property (retain, nonatomic) IESECHighlightButton *plusButton;
@property (weak, nonatomic) id<IESECSKUNumberCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUNumberViewModel *viewModel;

+ (struct CGSize { double x0; double x1; })getNumSizeWithBoundingSize:(struct CGSize { double x0; double x1; })a0;

- (void)minus;
- (void)plus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupAccessibility;

@end
