@class AWEWatchLaterDetailPageConfig, UIImageView, UILabel, UIView, UIButton;

@interface AWEWatchLaterBackgroundView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *actionBtn;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) long long style;
@property (nonatomic) BOOL shouldAdaptBigFont;
@property (retain, nonatomic) AWEWatchLaterDetailPageConfig *pageConfig;

- (void)switchToDefaultUI;
- (void)switchToActionUI;
- (void)onActionBtnClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPageConfig:(id)a1;
- (void)updateWithMainImgPath:(id)a0 mainTitle:(id)a1 subTitle:(id)a2;
- (void)updateWithMainImgPath:(id)a0 mainTitle:(id)a1 subTitle:(id)a2 actionTitle:(id)a3 actionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
