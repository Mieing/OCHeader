@class AWETransformerGroupElement;
@protocol AWETransformerRootViewDelegate;

@interface AWETransformerRootView : UIView

@property (retain, nonatomic) AWETransformerGroupElement *rootElement;
@property (weak, nonatomic) id<AWETransformerRootViewDelegate> delegate;

- (void)__updateLayout;
- (id)lynxViews;
- (id)cardElements;
- (id)globalParams;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void)didLoadTransformerRootView:(id)a0 isSuccess:(BOOL)a1;
- (id)tempoViewWithCardType:(long long)a0;
- (void)sendTempoEvent:(id)a0 params:(id)a1;
- (id)findViewInTempoViewWithName:(id)a0;
- (id)initWithElement:(id)a0 cardCache:(id)a1 delegate:(id)a2;
- (void)updateLayoutWithoutClean;
- (void)__sendLynxEvent:(id)a0 params:(id)a1 toElement:(id)a2;
- (void)__sendTempoEvent:(id)a0 params:(id)a1 toElement:(id)a2;
- (id)__lynxViewInElement:(id)a0;
- (id)__tempoViewInElement:(id)a0 cardType:(long long)a1;
- (id)findViewInTempoElement:(id)a0 name:(id)a1;
- (BOOL)hasDiffWithNewRootElement:(id)a0;
- (void)updateWithRootElement:(id)a0;
- (void)viewDidAppear;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)layout;
- (void)render;
- (id)initWithElement:(id)a0;
- (void)viewWillDisappear;

@end
