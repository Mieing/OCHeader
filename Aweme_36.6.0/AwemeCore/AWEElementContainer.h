@class UIStackView, NSMutableDictionary, NSArray, AWEPageContext, NSMutableArray, UIViewController;

@interface AWEElementContainer : NSObject

@property (class, nonatomic) BOOL perfABTestEnabled;

@property (retain, nonatomic) NSMutableArray *elementArray;
@property (retain, nonatomic) UIStackView *containerView;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEPageContext *context;
@property (nonatomic) BOOL isHideAllElements;
@property (retain, nonatomic) NSMutableDictionary *elementDictionary;
@property (nonatomic) BOOL enableCustomSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customInnerMargins;
@property (retain, nonatomic) NSArray *elementArray;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;

- (long long)elementsCount;
- (id)initWithViewController:(id)a0 context:(id)a1;
- (id)elementByClassName:(id)a0;
- (id)elementByProtocol:(id)a0;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 exceptArray:(id)a2;
- (void)addElementView:(id)a0 view:(id)a1;
- (id)getBehindElement:(id)a0;
- (id)getPreElement:(id)a0;
- (void)addElementToArray:(id)a0;
- (void)renderAppearElement:(id)a0;
- (id)mElementArray;
- (void)addElementToDictionary:(id)a0;
- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (id)elementsByClassName:(id)a0;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 duration:(double)a2 hiddenTranform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 exceptArray:(id)a4;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 duration:(double)a2 hiddenTranform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 exceptArray:(id)a4 animateBlock:(id /* block */)a5;
- (void)addElementByClassName:(id)a0;
- (id)elementsByProtocol:(id)a0;
- (long long)elementIndexByClassName:(id)a0;
- (id)elementByID:(id)a0;
- (void)enumerateElementsExceptArray:(id)a0 block:(id /* block */)a1;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 duration:(double)a2 exceptArray:(id)a3;
- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)init;
- (void)enumerateElementsUsingBlock:(id /* block */)a0;

@end
