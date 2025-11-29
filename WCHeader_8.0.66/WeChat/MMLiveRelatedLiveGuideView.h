@class PAGView, UILabel;

@interface MMLiveRelatedLiveGuideView : UIView

@property (retain, nonatomic) PAGView *animationView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } animationSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)play;
- (void)dismiss;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
