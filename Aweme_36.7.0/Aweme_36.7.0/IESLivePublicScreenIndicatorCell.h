@class UILabel, UIView;

@interface IESLivePublicScreenIndicatorCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *indicatorTab;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) long long tab;

- (void)showRedDot:(BOOL)a0;
- (id)labelAttributedText;
- (void)updateWithAttributedText:(id)a0;
- (void)updateWithColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
