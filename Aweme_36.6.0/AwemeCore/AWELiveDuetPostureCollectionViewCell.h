@class UIImageView, UITapGestureRecognizer, UIView;

@interface AWELiveDuetPostureCollectionViewCell : AWEStudioBaseCollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isCellSelected;

- (void)addSubviews;
- (void)updateSelectedStatus:(BOOL)a0;
- (void)updateIconImage:(id)a0;
- (void)tapAnimation;
- (void)indicatorAppear;
- (void)indicatorDisappear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
