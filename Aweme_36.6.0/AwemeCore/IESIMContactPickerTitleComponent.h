@class UILabel, UIView;

@interface IESIMContactPickerTitleComponent : AWEIMComponentBase

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (void)__log:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)p_layoutUI;
- (BOOL)p_isBigFontStyle;
- (double)p_fixedValueFor:(double)a0;
- (double)__duxFontSizeIfNecessary:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)componentView;

@end
