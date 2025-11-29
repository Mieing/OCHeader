@class UILabel, UIImageView;

@interface AWESearchInputCopilotOptionCardCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *optionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (struct CGSize { double x0; double x1; })sizeForModel:(id)a0;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
