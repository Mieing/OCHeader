@class UIView;

@interface HTSLiveToobarItemLandscapeCell : HTSLiveToobarItemCell

@property (retain, nonatomic) UIView *customViewForLandscape;
@property (retain, nonatomic) UIView *grayBackGroundView;

- (void)didSetAttachingDIContext;
- (void)highlightGuide;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
