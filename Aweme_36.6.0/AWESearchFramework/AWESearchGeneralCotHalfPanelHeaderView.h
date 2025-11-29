@class UIButton;

@interface AWESearchGeneralCotHalfPanelHeaderView : UIView

@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ closeHalfPanelBlock;

- (void)clickCloseButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)setupUI;

@end
