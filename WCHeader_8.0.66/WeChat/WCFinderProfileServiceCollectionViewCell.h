@class UILabel, UIImageView, WCFinderDyeWebImageView;

@interface WCFinderProfileServiceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderDyeWebImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *tailIcon;
@property (copy, nonatomic) id /* block */ tailIconObserver;

+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0;
+ (id)jumpInfoTailIcon:(id)a0;
+ (BOOL)hasEnoughMarginWithJumpInfo:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })displaySizeInContainerSize:(struct CGSize { double x0; double x1; })a0 itemPadding:(double)a1 lineElementCount:(long long)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitForJumpInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })tailIconSizeFromJumpInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithFinderJumpInfo:(id)a0 themeColor:(id)a1;
- (void)updateMargin;
- (void)addTailIconObserver:(id /* block */)a0;
- (void).cxx_destruct;

@end
