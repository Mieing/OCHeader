@class UILabel, NSString, UIView;

@interface AWEMusicGuideToastView : UIView

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) UIView *triangleView;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) double triangleViewRightOffset;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
