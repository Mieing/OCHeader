@class AWEIMShapeView, UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMAudioRecordGradientView : UIView

@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *backGradientView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *arcGradientView;
@property (retain, nonatomic) AWEIMShapeView *arcBorderView;
@property (retain, nonatomic) UIView *keyboardMaskView;
@property (nonatomic) unsigned long long currentState;

+ (double)arcBorderTopY;

- (void)switchToState:(unsigned long long)a0;
- (void)p_addThemeReload;
- (void)triggerShowKeyboardMask;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
