@class NSString;
@protocol BDXLynxOverlayLightViewDelegate;

@interface BDXLynxOverlayLightSimultaneouslyGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<BDXLynxOverlayLightViewDelegate> uiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
