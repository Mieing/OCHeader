@class UIImageView, MMUILabel, UIView;

@interface BTLiveSectionBarHeaderView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *arrowContainerView;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) MMUILabel *brandCountLabel;

- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)transToExpandState;
- (void)transToFoldState:(long long)a0;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;

@end
