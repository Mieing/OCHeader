@class UIStackView, IESECSKUNewHeaderViewModel, IESECSKUCarAdaptView, UILabel, IESECUIImageView;
@protocol IESECSKUNewHeaderCellDelegate;

@interface IESECSKUNewHeaderCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sizeAssistantLabel;
@property (retain, nonatomic) IESECUIImageView *sizeArrow;
@property (retain, nonatomic) IESECUIImageView *swicthSpecButton;
@property (retain, nonatomic) IESECUIImageView *dashline;
@property (retain, nonatomic) IESECSKUCarAdaptView *carView;
@property (retain, nonatomic) IESECSKUNewHeaderViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUNewHeaderCellDelegate> delegate;

+ (struct CGSize { double x0; double x1; })getHeaderSizeWithBoundingSize:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (void)tappedSizeComponent;
- (void)tappedSpecSwitch;
- (void)tagCarAdapt;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
