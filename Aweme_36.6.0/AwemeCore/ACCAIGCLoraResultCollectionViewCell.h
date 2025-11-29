@class UIImageView, ACCAnimatedButton, UILabel;

@interface ACCAIGCLoraResultCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) ACCAnimatedButton *delButton;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) UIImageView *addImageView;
@property (nonatomic) BOOL markadd;
@property (nonatomic) long long markindex;
@property (copy, nonatomic) id /* block */ delClickBlock;

- (void)p_delClicked:(id)a0;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;

@end
