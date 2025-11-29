@class YYLabel, UIImage;

@interface AWESearchLocationResultBottomGuideView : UIView

@property (retain, nonatomic) YYLabel *guideLabel;
@property (retain, nonatomic) UIImage *arrowImage;

- (void)setGuideWithTitle:(id)a0 subTitle:(id)a1 jumpUrl:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
