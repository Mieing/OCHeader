@class UIImageView, AWEBarPanelDetailBottomUIConfig, UILabel;

@interface AWEBarPanelDetailBottomBar : UIControl

@property (retain, nonatomic) AWEBarPanelDetailBottomUIConfig *config;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *animatedLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)configureUI;
- (void).cxx_destruct;

@end
