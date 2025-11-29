@class UIImageView, UILabel, ACCSideslipPropPickMoreViewConfig;

@interface ACCSideslipPropPickMoreView : UIView

@property (retain, nonatomic) ACCSideslipPropPickMoreViewConfig *config;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)onClicked;
- (void)registerClickedEvent:(id /* block */)a0;
- (void)configClickEvent;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
