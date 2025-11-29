@class LynxContext;

@interface LynxKeyboardEventDispatcher : NSObject {
    LynxContext *_context;
}

- (id)getKeyboardView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
