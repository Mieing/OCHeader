@class UIView;
@protocol ACCTextStickerServiceProtocol, ACCSecondaryPageInnerTransitionManager;

@interface ACCTextStickerEditInputComponent : ACCSecondaryPageComponent

@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;
@property (weak, nonatomic) id<ACCSecondaryPageInnerTransitionManager> transitionManager;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double keyboardHeight;

- (void)componentDidAppear;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)setupGesture;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)handleTapGesture;

@end
