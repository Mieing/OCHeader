@class UILabel, UIImageView, UIView;

@interface CJPayBindCardContainerView : UIView

@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) BOOL isClickStyle;
@property (retain, nonatomic) UIImageView *rightImageView;

- (void)updateWithMainStr:(id)a0 subStr:(id)a1;
- (void)updateStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
