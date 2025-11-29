@class AWEPlayInteractionLongPressModalQuickItems, AWELongPressModalView, UIView;
@protocol AWEPlayInteractionLongPressModalHandlerDelagate;

@interface AWEPlayInteractionLongPressModalHandler : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } initialTouchPoint;
@property (nonatomic) double maxDistance;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) BOOL shouldTriggerAction;
@property (retain, nonatomic) AWELongPressModalView *modalView;
@property (nonatomic) BOOL isModalInteracting;
@property (weak, nonatomic) UIView *containterView;
@property (weak, nonatomic) id<AWEPlayInteractionLongPressModalHandlerDelagate> delegate;
@property (nonatomic) long long topIconType;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalQuickItems *leftItem;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalQuickItems *rightItem;

- (void)gestureEnded;
- (void)addModalView;
- (void)gestureBegan:(struct CGPoint { double x0; double x1; })a0;
- (void)checkButtonArea:(struct CGPoint { double x0; double x1; })a0;
- (void)removeModalView;
- (void)resetGestureState;
- (double)buttonHotAreaWidth;
- (double)buttonHotAreaHeight;
- (BOOL)isHitButtonRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)handleLongPressModalDidLeaveAction:(unsigned long long)a0;
- (void)handleButtonActionTransition:(unsigned long long)a0;
- (double)buttonMinHitThreshold;
- (void)handleLongPressModalDidReachAction:(unsigned long long)a0;
- (void)detectDirectionWithDelta:(double)a0;
- (void)checkThresholdWithDelta:(double)a0;
- (void)handleLongPressModalDidTriggerAction:(unsigned long long)a0;
- (void)calculateMaxDistance;
- (void)resetForDirectionChange;
- (double)longPressUpDownMaxThreshold;
- (void)handleLongPressModalGesture:(id)a0;
- (void).cxx_destruct;
- (void)gestureChanged:(struct CGPoint { double x0; double x1; })a0;

@end
