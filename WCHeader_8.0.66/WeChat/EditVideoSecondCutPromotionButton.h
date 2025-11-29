@class MMUILabel, MMUIImageView, UIStackView;

@interface EditVideoSecondCutPromotionButton : MMUIButton

@property (nonatomic) long long currentEntryType;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) MMUIImageView *secondCutLogo;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (nonatomic) unsigned long long editVideoEntrance;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initStackView;
- (void)_initSecondCutLogo;
- (void)_initTextLabel;
- (void)_initArrowImageView;
- (long long)getCurrentEntryType;
- (void)updateEntryType:(long long)a0;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
