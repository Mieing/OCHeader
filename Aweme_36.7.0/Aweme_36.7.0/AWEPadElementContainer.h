@class NSArray;

@interface AWEPadElementContainer : AWEElementContainer

@property (nonatomic) BOOL forceHidden;
@property (copy, nonatomic) NSArray *exceptArray;
@property (nonatomic) BOOL waitHiddenElements;

- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 exceptArray:(id)a2;
- (void)addElementView:(id)a0 view:(id)a1;
- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 duration:(double)a2 hiddenTranform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 exceptArray:(id)a4 animateBlock:(id /* block */)a5;
- (void)foreHideAllElements:(BOOL)a0 animate:(BOOL)a1 exceptArray:(id)a2;
- (void).cxx_destruct;

@end
