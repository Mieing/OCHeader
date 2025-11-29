@class IESLLPOIDetailNGPOIMallFilterContainer, IESLLPOIDetailNGPOIMallFilterComponentViewModel, IESLLDitoPOIMallPageContext, NSString, IESLLPOILoadingView, IESLLPOIMallStatusErrorVC, UIView;

@interface IESLLPOIDetailNGPOIMallFilterComponentView : LLDitoComponentView <IESLLPOIDetailNGPOIMallFilterClickDelegate>

@property (weak, nonatomic) IESLLPOIDetailNGPOIMallFilterComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOILoadingView *loadingView;
@property (retain, nonatomic) IESLLPOIMallStatusErrorVC *errorVC;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLLPOIDetailNGPOIMallFilterContainer *floorFilter;
@property (retain, nonatomic) IESLLPOIDetailNGPOIMallFilterContainer *typeFilter;
@property (retain, nonatomic) IESLLPOIDetailNGPOIMallFilterContainer *sortFilter;
@property (retain, nonatomic) IESLLDitoPOIMallPageContext *floorContext;
@property (retain, nonatomic) IESLLDitoPOIMallPageContext *typeContext;
@property (retain, nonatomic) IESLLDitoPOIMallPageContext *sortContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLoadingView;
- (void)hideErrorView;
- (void)updateContext:(id)a0 forKey:(id)a1;
- (void)updateViewModel:(id)a0;
- (void)setupLoadingView;
- (void)bindActionAndState;
- (void)didTabChange;
- (id)generalContext;
- (void)updateWithLoadMoreState:(unsigned long long)a0;
- (void)remakeButtonStyle;
- (void)setupSelectBlock;
- (void)hideTypeFilterIfNeed;
- (void)hideSortFilterIfNeed;
- (void)hideFloorFilterIfNeed;
- (void)closeUserInteraction;
- (void)openUserInteraction;
- (void)expandFilter;
- (void)collapseFilter;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)beginLoading;
- (void)setupUI;
- (void)showErrorView;

@end
