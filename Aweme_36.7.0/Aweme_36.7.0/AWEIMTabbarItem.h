@class UIButton;

@interface AWEIMTabbarItem : UIView

@property (retain, nonatomic) UIButton *itemButton;
@property (nonatomic) long long tabIndex;
@property (copy, nonatomic) id /* block */ tabTappedBlock;

- (void)__setupUI;
- (void)configWithTitle:(id)a0;
- (void)__itemButtonClicked:(id)a0;
- (void)changeSelectStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
