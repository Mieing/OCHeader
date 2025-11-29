@protocol DUXKeyboardObserver;

@interface DUXKeyboardManager : NSObject

@property (weak, nonatomic) id<DUXKeyboardObserver> observer;

- (id)getKeyboardViewFromWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getKeyboardFrame;
- (BOOL)enableFixDUXKeyboardiOS26;
- (void).cxx_destruct;
- (void)addObserver;
- (id)initWithObserver:(id)a0;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)a0;

@end
