@class NSHashTable, UIWindow, UIView;

@interface YYTextKeyboardManager : NSObject {
    NSHashTable *_observers;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromFrame;
    BOOL _fromVisible;
    long long _fromOrientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _notificationFromFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _notificationToFrame;
    double _notificationDuration;
    long long _notificationCurve;
    BOOL _hasNotification;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _observedToFrame;
    BOOL _hasObservedChange;
    BOOL _lastIsNotification;
}

@property (readonly, nonatomic) UIWindow *keyboardWindow;
@property (readonly, nonatomic) UIView *keyboardView;
@property (readonly, nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyboardFrame;

+ (void)load;
+ (id)defaultManager;

- (void)_keyboardFrameWillChangeNotification:(id)a0;
- (void)_keyboardFrameDidChangeNotification:(id)a0;
- (void)_keyboardFrameChanged:(id)a0;
- (id)_getKeyboardViewFromWindow:(id)a0;
- (void)_initFrameObserver;
- (void)_notifyAllObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (id)init;
- (id)_init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (double)_systemVersion;

@end
