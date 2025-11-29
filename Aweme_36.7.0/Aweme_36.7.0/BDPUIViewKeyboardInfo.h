@class NSMutableDictionary, UIView;

@interface BDPUIViewKeyboardInfo : NSObject

@property (nonatomic) double keyBoardOriginY;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *responderView;
@property (nonatomic) BOOL isKeyboardShowFired;
@property (retain, nonatomic) NSMutableDictionary *bottomPaddingDict;

+ (id)bdp_findFirstResponderInView:(id)a0;

- (void)addKeyboardObserve;
- (void)adjustAppPageFrameForKeyboardHidden:(id)a0;
- (void)adjustAppPageFrameForKeyboardShow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerThatFitsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)animationOptions:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absFrame;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)keyboardWillChange:(id)a0;

@end
