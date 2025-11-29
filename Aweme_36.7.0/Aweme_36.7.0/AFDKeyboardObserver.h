@interface AFDKeyboardObserver : NSObject

@property (copy, nonatomic) id /* block */ changeBlock;
@property (nonatomic) BOOL keyboardVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;

- (void)startObservingWithChangeBlock:(id /* block */)a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopObserving;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardWillChange:(id)a0;

@end
