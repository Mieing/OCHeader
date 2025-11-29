@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMPhotoPickerNavView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *originalButton;
@property (nonatomic) BOOL original;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ backBlock;
@property (nonatomic) BOOL collectionOn;
@property (copy, nonatomic) id /* block */ switchImageCollectionBlock;
@property (copy, nonatomic) id /* block */ originalValueChangeBlock;

- (void)addSubviews;
- (void)addGestures;
- (void)didRelexNavView;
- (void)didFoldNavView;
- (void)setOriginal:(BOOL)a0 animated:(BOOL)a1;
- (void)shouldShowOriginalButton:(BOOL)a0;
- (void)originalButtonPressed:(id)a0;
- (void)switchButtonPressed:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)backButtonPressed:(id)a0;
- (void)setNavTitle:(id)a0;
- (void)setUpConstraints;

@end
