@class IESECHighlightButton, IESECSKUNumberViewModel, UILabel, UIView;
@protocol IESECSKUNumberCellDelegate;

@interface IESECSKUNumberCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) IESECHighlightButton *minusButton;
@property (retain, nonatomic) IESECHighlightButton *plusButton;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<IESECSKUNumberCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUNumberViewModel *viewModel;

- (void)minus;
- (void)plus;
- (void)makeContraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupAccessibility;

@end
