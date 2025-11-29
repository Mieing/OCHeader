@class UIButton, UILabel, UIImageView;

@interface AWEVideoUniformEffectSideslipPanelHideView : UIView

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) BOOL supportClose;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)closeButtonDidClick;
- (void)configSupportClose:(BOOL)a0;
- (void)configHideViewWithIconImage:(id)a0 titleLabel:(id)a1;
- (void)oneClickFilmingButtonDidClick;
- (id)initWithClickBlock:(id /* block */)a0 supportClose:(BOOL)a1 closeBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupUI;

@end
