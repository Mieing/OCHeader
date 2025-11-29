@class UISwitch;

@interface IESLiveGiftMostlyUsedSwitchView : UIView

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (retain, nonatomic) UISwitch *switchView;
@property (copy, nonatomic) id /* block */ statusChanged;

- (void)switchDidTap;
- (void).cxx_destruct;
- (BOOL)isOn;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setupViews;

@end
