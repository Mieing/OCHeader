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

+ (id)defaultManager;
+ (void)load;

- (id)init;
- (id)_init;
- (void)_initFrameObserver;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (double)_systemVersion;
- (id)_getKeyboardViewFromWindow:(id)a0;
- (void)_keyboardFrameWillChangeNotification:(id)a0;
- (void)_keyboardFrameDidChangeNotification:(id)a0;
- (void)_keyboardFrameChanged:(id)a0;
- (void)_notifyAllObservers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (void).cxx_destruct;

@end
