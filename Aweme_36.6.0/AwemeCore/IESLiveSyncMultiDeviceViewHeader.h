@class UILabel, UIButton;

@interface IESLiveSyncMultiDeviceViewHeader : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *refresh;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void)setupUI:(unsigned long long)a0;
- (void)updateSearchStatus:(long long)a0;
- (id)initWithTheme:(unsigned long long)a0 refreshBlock:(id /* block */)a1;
- (void)clickRefresh;
- (void).cxx_destruct;

@end
