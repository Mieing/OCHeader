@class AWEProgressConfigs, NSMutableDictionary, NSString, AWEAwemeModel, AWEPageContext, NSMutableArray, UIViewController;
@protocol AWEProgressElementDelegate, AWEProgressContextProtocol;

@interface AWEProgressElementContainer : AWEElementContainer <AWEProgressElementContainerProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSMutableArray *elementArray;
@property (retain, nonatomic) NSMutableDictionary *elementDictionary;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressConfigs *config;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (void)addElementToArray:(id)a0;
- (void)renderAppearElement:(id)a0;
- (id)mElementArray;
- (void)addElementToDictionary:(id)a0;
- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)addLeftEdgeInsetIfNeed:(double)a0 bizType:(unsigned long long)a1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (id)currentStatisticalInfo;
- (void).cxx_destruct;
- (void)reset;

@end
