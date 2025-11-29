@class NSString, UIView;

@interface IESDragDismissViewControllerProtocol_IESProtocolContainer : NSObject <IESDragDismissViewControllerProtocol>

@property (retain, nonatomic) UIView *baseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDismissTapGesture:(id)a0;
- (id)dismissTapGesture;
- (void)setDismissPanGesture:(id)a0;
- (id)dismissPanGesture;
- (void)setLastDismissPanGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })lastDismissPanGestureLocation;
- (void)showOnView:(id)a0 initialLayoutBlock:(id /* block */)a1 targetLayoutBlock:(id /* block */)a2 animated:(BOOL)a3;
- (void)performDismissAnimated:(BOOL)a0;
- (void)ies_setupDismissGesture;
- (void)ies_handleDismissPanGesture:(id)a0;
- (void)ies_handleDismissTapGesture:(id)a0;
- (id)ies_conflictScrollView;
- (void)setIes_conflictScrollView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)dismissAnimated:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
