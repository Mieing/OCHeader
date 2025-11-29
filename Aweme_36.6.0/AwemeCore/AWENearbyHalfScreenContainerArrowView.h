@class UIImageView;

@interface AWENearbyHalfScreenContainerArrowView : UIView

@property (retain, nonatomic) UIImageView *noarmoalArrowImageView;
@property (retain, nonatomic) UIImageView *targetImageView;
@property (retain, nonatomic) UIImageView *sloganImgView;
@property (retain, nonatomic) UIImageView *arrowHeadImgView;
@property (retain, nonatomic) UIImageView *arrowNockImgView;
@property (copy, nonatomic) id /* block */ touchTargetBlk;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
