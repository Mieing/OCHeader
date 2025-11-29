@class NSArray, NSMutableDictionary, NSString, LLDitoPageContext, LLDitoContainerLayout, LLDitoDecorationView;
@protocol LLDitoContainerViewDataSource, LLDitoContainerViewDelegate;

@interface LLDitoContainerView : UIView <LLDitoContainerViewConfigProtocol>

@property (nonatomic) long long numberOfItems;
@property (retain, nonatomic) NSArray *nodeViewList;
@property (retain, nonatomic) NSMutableDictionary *itemViewClassMap;
@property (retain, nonatomic) NSMutableDictionary *itemViewReusePool;
@property (retain, nonatomic) NSMutableDictionary *itemViewUsingPool;
@property (retain, nonatomic) LLDitoDecorationView *decorationView;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (retain, nonatomic) LLDitoContainerLayout *layout;
@property (weak, nonatomic) id<LLDitoContainerViewDataSource> dataSource;
@property (weak, nonatomic) id<LLDitoContainerViewDelegate> delegate;
@property (nonatomic) BOOL enableEventThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (id)visibleComponentViews;
- (void)pushItemViewToReusePool:(id)a0 withIdentifier:(id)a1;
- (BOOL)dataSourceIsEnable;
- (id)itemViewIdentifier:(id)a0;
- (void)popItemViewFromReusePool:(id)a0 withIdentifier:(id)a1;
- (void)pushItemViewToUsingPool:(id)a0 withIdentifier:(id)a1;
- (void)popItemViewFromUsingPool:(id)a0 withIdentifier:(id)a1;
- (void)updateDecorationView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andLayout:(id)a1;
- (id)dequeueReusableItemViewWithReuseIdentifier:(id)a0 forIndex:(long long)a1;
- (id)itemViewShowingOnContainerWithIdentifier:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)indexPathsForVisibleItems;
- (void)registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (void)clearContainer;

@end
