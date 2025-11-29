@class UILabel, UIImageView;

@interface ACCAIGCSelectLoraInfoFooterCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *managerLoraLabel;
@property (retain, nonatomic) UIImageView *managerLoraImageView;
@property (nonatomic) long long darkMode;

- (void)addJumpManagerLoraButtonTarget:(id)a0 sel:(SEL)a1;
- (struct CGSize { double x0; double x1; })calculateCustomLabelHeightWithLabel:(id)a0 font:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
