@class UIImageView, UILabel, UIView;

@interface AWEJingXuanTabAIBottomBarGuideView : UIView

@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
