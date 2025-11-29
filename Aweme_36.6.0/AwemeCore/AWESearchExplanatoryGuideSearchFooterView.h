@class DUXBaseLabel, DUXBaseImageView;

@interface AWESearchExplanatoryGuideSearchFooterView : DUXBaseCollectionReusableView

@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) DUXBaseLabel *label;

- (void)configUI;
- (void)switchToDrag;
- (void)switchToRelease;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
