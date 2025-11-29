@class UIVisualEffectView, UIView;
@protocol RxInjector;

@interface RTVInteractionBlurEffectView : UIView

@property (weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *subEffectView;
@property (nonatomic) BOOL focusOn;

+ (id)blurEffectViewWithInjector:(id)a0;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void).cxx_destruct;

@end
