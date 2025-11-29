@class MMLiveObjectManipulationGestureRecognizer, NSString, MMLiveObjectManipulationViewConfiguration, MMLiveObjectManipulationViewCornerActionButton, UIView;
@protocol MMLiveObjectManipulationViewDelegate;

@interface MMLiveObjectManipulationView : UIView <MMLiveObjectManipulationViewCornerActionButtonDelegate>

@property (retain, nonatomic) UIView *content;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) MMLiveObjectManipulationViewConfiguration *config;
@property (retain, nonatomic) MMLiveObjectManipulationGestureRecognizer *gesture;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *cornerButtonsContainerView;
@property (retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *topLeftActionButton;
@property (retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *topRightActionButton;
@property (retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *bottomLeftActionButton;
@property (retain, nonatomic) MMLiveObjectManipulationViewCornerActionButton *bottomRightActionButton;
@property (nonatomic) double actualBorderWidth;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentCenter;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } contentTransform;
@property (weak, nonatomic) id<MMLiveObjectManipulationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContent:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 contentAccessibilityDescriptor:(id)a2 configuration:(id)a3;
- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)onManipulationGesture:(id)a0;
- (void)onTapped;
- (void)onVoiceOverStatusChanged;
- (void)onManipulationViewCustomCornerActionInvoked:(id)a0;
- (void)onManipulationViewScaleRotationCornerActionInvokedByGestureRecognizer:(id)a0;
- (void)updateBorder;
- (void)applyContentAccessibilityDescriptor:(id)a0;
- (void)configureBorderAndCornerActions;
- (void)createBorderView;
- (void)updateCornerActions;
- (id)updatedCornerActionButtonWithOriginal:(id)a0 action:(id)a1;
- (BOOL)hasAnyCornerActions;
- (void).cxx_destruct;

@end
