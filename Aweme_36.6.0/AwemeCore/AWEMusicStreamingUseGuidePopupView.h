@class UIImageView, UILabel, UIButton;

@interface AWEMusicStreamingUseGuidePopupView : AWEMusicStreamingBasePopupView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *linkBtn;

- (void)showInView:(id)a0 duration:(double)a1;
- (void)guideLinkJump;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
