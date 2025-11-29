@class UIView;

@interface _YYTextKeyboardViewFrameObserver : NSObject {
    UIView *_keyboardView;
}

@property (copy, nonatomic) id /* block */ notifyBlock;

+ (id)observerForView:(id)a0;

- (void)addToKeyboardView:(id)a0;
- (void)removeFrameObserver;
- (void)addFrameObserver;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
