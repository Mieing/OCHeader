@class UIImageView, UIView, IESLiveBigPartyOpenGuideViewConfig;

@interface IESLiveBigPartyOpenGuideView : UIView

@property (retain, nonatomic) IESLiveBigPartyOpenGuideViewConfig *config;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIView *containView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
