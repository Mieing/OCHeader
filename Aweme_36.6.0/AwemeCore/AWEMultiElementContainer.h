@class AWEElementGroups, NSMapTable, NSString, AWEPageContext, NSMutableArray, UIViewController;

@interface AWEMultiElementContainer : AWEElementContainer <AWEElementReuseDelegate>

@property (retain, nonatomic) NSMapTable *reusableElements;
@property (retain, nonatomic) NSMapTable *reuseCounter;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEPageContext *context;
@property (retain, nonatomic) NSMutableArray *allElements;
@property (retain, nonatomic) AWEElementGroups *elementGroups;
@property (nonatomic) long long reuseWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (void)addElementView:(id)a0 view:(id)a1;
- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (void)clearByReuseCounter;
- (id)dequeueReuseElementWithClass:(Class)a0;
- (void)clearForPrepareSetModel;
- (id)elementArray;
- (void).cxx_destruct;

@end
