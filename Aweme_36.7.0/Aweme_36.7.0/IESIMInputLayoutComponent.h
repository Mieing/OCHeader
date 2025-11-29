@class NSArray, UIVisualEffectView, NSString, UIView;

@interface IESIMInputLayoutComponent : AWEIMComponentBase <IESIMInputLayoutComponentInterface, IESIMInputStateChangedActionProtocol, IESIMInputThemeChangedAction, IESIMInputTextStateChangeAction>

@property (retain, nonatomic) UIView *textViewBackgroundView;
@property (retain, nonatomic) UIView *textViewAboveBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *textViewBackgroundViewBlurView;
@property (retain, nonatomic) UIView *inputBarElementContainer;
@property (retain, nonatomic) NSArray *leftButtons;
@property (retain, nonatomic) NSArray *rightButtons;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL isFrozenByPanGesture;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *panelsContainer;
@property (retain, nonatomic) UIView *inputBarContainer;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCFoldedFrame;
- (double)possibleBottomOffset;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 fromSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCFoldedFrame:(double)a0;
- (void)performWithDuration:(double)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_layoutInputViewsAfterAdjustButtons;
- (void)refreshButtonLayoutWhenFrameChanged;
- (double)p_input_inside_broaden_send_button_margin;
- (double)p_input_inside_button_margin;
- (BOOL)p_needefreshFor:(id)a0 with:(id)a1;
- (void)refreshInputVCFrame;
- (void)refreshInputVCFrameWithNewInputViewType:(long long)a0 oldInputViewType:(long long)a1;
- (void)refreshInputVCFrameWithContext:(id)a0;
- (void)pp_layoutSubviewsWithAnimated:(BOOL)a0 context:(id)a1;
- (void)didUpdateInputVCFrameWithNewInputViewType:(long long)a0 oldInputViewType:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCUnfoldFrame:(double)a0 inputType:(long long)a1 context:(id)a2;
- (double)p_possibleBottomOffset;
- (double)superViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCUnfoldFrame:(double)a0 inputType:(long long)a1;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (double)currentTextViewBackgroundViewHeight;
- (void)updateTextViewBackgroundViewHeight:(double)a0;
- (void)addSubViewToTextViewBackground:(id)a0;
- (void)updateViewsWhenExchangeBarShown:(BOOL)a0;
- (void)addSubViewToInputBarContainer:(id)a0;
- (void)addSubViewToElementContainer:(id)a0;
- (void)updateBottomBackgroundColor:(id)a0;
- (void)addSubViewToInputVC:(id)a0;
- (void)addSubViewToInputElementContainer:(id)a0 belowSubView:(id)a1;
- (double)inputBarContainerHeight;
- (void)refreshInputVCWithoutAnimation;
- (void)asyncRefreshLayout;
- (void)constructInputFrame;
- (void)constructAudioInputView;
- (void)constructTextView;
- (void)layoutLeftButtons;
- (void)layoutRightButtonsWithAnimated:(BOOL)a0;
- (void)p_layoutButtonBottom:(id)a0;
- (void)layoutRightButtons;
- (void)adjustPanelContainerFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputBarHeight:(double)a1;
- (void)adjustInputBarContainerFrameWithHeight:(double)a0;
- (void)adjustTextViewBackgroundViewFrame;
- (void)adjustBottomBackgroundViewFrame;
- (void).cxx_destruct;
- (void)refreshLayout;

@end
