@class RTVXRNarrowDrawerView, RTVXRContainerLayoutAttributesSnapshot, NSString, RTVVoipTracker, RTVNarrowWindowLayoutContext, RTVXRNarrowWindowGeatureController, UIView;
@protocol RxInjector, RTVVoipStorageAreaInterface, RTVNarrowViewHelperInterface, RTVXRNarrowWindowLayoutControllerDelegate;

@interface RTVXRNarrowWindowLayoutController : NSObject <RTVXRNarrowWindowGeatureControllerDelegate, RTVXRNarrowDrawerViewDelegate>

@property (readonly, copy, nonatomic) UIView *containerView;
@property (readonly, nonatomic) RTVNarrowWindowLayoutContext *context;
@property (readonly, nonatomic) RTVXRNarrowWindowGeatureController *gestureController;
@property (readonly, nonatomic) id<RTVNarrowViewHelperInterface> narrowHelper;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipStorageAreaInterface> storage;
@property (readonly, nonatomic) RTVVoipTracker *tracker;
@property (nonatomic) BOOL isLastTimeDrawerDisplay;
@property (retain, nonatomic) RTVXRNarrowDrawerView *drawerView;
@property (retain, nonatomic) RTVXRContainerLayoutAttributesSnapshot *snapshot;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<RTVXRNarrowWindowLayoutControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__addObserver;
- (void)deactive;
- (BOOL)isNarrowDrawerDisplaying;
- (void)__keyboardWillShow:(id)a0;
- (void)__keyboardWillHide:(id)a0;
- (double)__heightInNoti:(id)a0;
- (void)cancelInteractiveGesture;
- (id)layoutSnapShot;
- (void)gestureController:(id)a0 didBeginGesture:(long long)a1 snapshot:(id)a2;
- (void)gestureController:(id)a0 didChangeState:(long long)a1 snapshot:(id)a2;
- (void)gestureController:(id)a0 didEndGesture:(long long)a1 snapshot:(id)a2;
- (void)renderContainerView:(id)a0 context:(id)a1;
- (BOOL)hadRender;
- (void)refreshNarrowDrawerViewWithSnapShot:(BOOL)a0;
- (id)defaultDrawerXPosition;
- (void)applyLayoutSnapshot:(id)a0 animate:(BOOL)a1;
- (void)rtvDrawerViewDidTaped:(id)a0;
- (void)__restoreLastScaleLevelIfNeeded;
- (void)__refreshGestureControllerState;
- (void)__applyLayoutSnapshot:(id)a0 animator:(id)a1;
- (void)__preprocessSnapshot:(id)a0;
- (void)track_narrowWindowShapeChange:(id)a0;
- (void)__adjustLayoutTransform:(id)a0 needScale:(BOOL)a1;
- (void)__layoutTransformToFrame;
- (void)__saveLastPinScaleLevel:(long long)a0;
- (void)__drawerDidFinishDrag;
- (void)__layoutDrawerWithContainerFrame;
- (long long)__queryLastPinScaleLevel;
- (void)active;
- (void).cxx_destruct;
- (unsigned long long)contentLayout;
- (long long)verticalAlignment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrame;
- (void)refreshWithContext:(id)a0;

@end
