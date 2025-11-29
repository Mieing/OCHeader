@class UILabel, MMLiveQcPollResponseOption, UIView;

@interface MMLiveQcPollPageSheetCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMLiveQcPollResponseOption *option;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
