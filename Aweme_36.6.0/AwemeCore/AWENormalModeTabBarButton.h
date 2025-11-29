@class UILongPressGestureRecognizer, UIViewController, AWENormalModeTabBarButtonTapGesture, NSString, UITapGestureRecognizer;
@protocol AWETabBarButtonDelegate;

@interface AWENormalModeTabBarButton : UIButton <UIGestureRecognizerDelegate, AWENormalModeTabBarButtonTapGestureDelegate, AWETabBarButtonProtocol>

@property (retain, nonatomic) AWENormalModeTabBarButtonTapGesture *singleTapGes;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (weak, nonatomic) id<AWETabBarButtonDelegate> delegate;
@property (nonatomic) long long type;
@property (nonatomic) long long index;
@property (nonatomic) long long validIndex;
@property (nonatomic) long long status;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewController:(id)a1 type:(long long)a2;

- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)onTouchUpInside;
- (void)addLongPressGes;
- (void)removeLongPressGes;
- (void)handleDoubleClick;
- (void)longPressButton:(id)a0;
- (void)gesture:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)gesture:(id)a0 touchesEnded:(id)a1 withEvent:(id)a2;
- (void)gesture:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)gesture:(id)a0 touchesCancelled:(id)a1 withEvent:(id)a2;
- (void)addDoubleClickGes;
- (void)removeDoubleClickGes;
- (void)updateLongPressGes;
- (BOOL)canHandleDoubleClick;
- (BOOL)canHandleLongPress;
- (void)doubleTapButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
