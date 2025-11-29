@class IESECUIImageView;

@interface IESECCommentListSkeletonView : UIView

@property (retain, nonatomic) IESECUIImageView *contentImageView;
@property (nonatomic) long long style;

- (id)imageNameWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;

@end
