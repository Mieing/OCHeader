@class NSString, NSMutableSet;
@protocol WATouchBaseViewDelegate;

@interface WATouchBaseView : UIView <WAAllTouchRecognizerDelegate, WeAppCore.WAAgentTouchEventResponder>

@property (retain, nonatomic) NSMutableSet *curTouchSet;
@property (weak, nonatomic) id<WATouchBaseViewDelegate> touchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void)touchesGesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesGesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesGesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesGesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)isInteractive;
- (void)simulateTouchBeganAt:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)simulateTouchMovedAt:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)simulateTouchEndedAt:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
