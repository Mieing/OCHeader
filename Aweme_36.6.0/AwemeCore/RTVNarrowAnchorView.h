@class UIStackView, UIView, UIImageView, NSString, UILabel, RTVNarrowAnchorViewModel, UITapGestureRecognizer;
@protocol RxInjector;

@interface RTVNarrowAnchorView : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIStackView *containerView;
@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVNarrowAnchorViewModel *viewModel;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) UIView *highlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__handleTapGesture:(id)a0;
- (void)renderModel:(id)a0;
- (void)__configComponents;
- (void)__refreshComponents;
- (long long)currentAnchorType;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)preferredHeight;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
