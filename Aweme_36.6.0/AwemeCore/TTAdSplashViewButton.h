@class UILabel, NSString, UIView;

@interface TTAdSplashViewButton : UIView {
    UIView *_titleBgView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *imageView;
@property (copy, nonatomic) id /* block */ buttonTapActionBlock;
@property (copy, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (void)handleTapAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
