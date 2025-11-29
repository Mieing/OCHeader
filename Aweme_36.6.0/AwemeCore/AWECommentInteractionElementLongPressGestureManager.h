@interface AWECommentInteractionElementLongPressGestureManager : NSObject <UIGestureRecognizerDelegate, AWEInteractionElementLongPressProtocol> {
    void /* function */ touchBegin;
    void /* function */ gestureBegin;
    void /* function */ gestureChanged;
    void /* function */ gestureEnded;
    void /* function */ gestureFailed;
    void /* function */ gestureDeault;
    void /* unknown type, empty encoding */ animationView;
    void /* unknown type, empty encoding */ targetView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPress;
}

@property (nonatomic, copy) id /* block */ touchBegin;
@property (nonatomic, copy) id /* block */ gestureBegin;
@property (nonatomic, copy) id /* block */ gestureChanged;
@property (nonatomic, copy) id /* block */ gestureEnded;
@property (nonatomic, copy) id /* block */ gestureFailed;
@property (nonatomic, copy) id /* block */ gestureDeault;

- (void)handleLongPressWithGes:(id)a0;
- (void)addLongPressGesture:(id)a0 animationView:(id)a1 gesDelegate:(id)a2;
- (void)removeGesture;
- (void)recoverAnimationView:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
