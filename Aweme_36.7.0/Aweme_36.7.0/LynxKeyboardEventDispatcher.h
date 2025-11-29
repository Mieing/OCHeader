@class LynxContext, NSMutableDictionary;

@interface LynxKeyboardEventDispatcher : NSObject {
    LynxContext *_context;
}

@property (retain, nonatomic) NSMutableDictionary *observers;

- (void)addKeyboardEventObserver:(id)a0;
- (id)getKeyboardView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
