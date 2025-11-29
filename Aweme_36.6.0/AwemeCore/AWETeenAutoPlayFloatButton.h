@class UILabel, AWETeenAutoPlaySwitchView, UIView;

@interface AWETeenAutoPlayFloatButton : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWETeenAutoPlaySwitchView *switchView;
@property (copy, nonatomic) id /* block */ onButtonClicked;

- (void)updateViewWithAutoPlayState:(BOOL)a0 animated:(BOOL)a1;
- (void)updatePlayTimeTip:(BOOL)a0 withText:(id)a1 autoPlayState:(BOOL)a2;
- (void)autoPlayFloatingButtonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
