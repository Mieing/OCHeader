@class UIView, AWEPOIDetailNGPOIMallFilterContainer, AWEDitoPOIMallPageContext, NSString, AWEPOIMallStatusErrorVC, AWEUILoadingView, AWEPOIDetailNGPOIMallFilterComponentViewModel;

@interface AWEPOIDetailNGPOIMallFilterComponentView : DitoComponentView <AWEPOIDetailNGPOIMallFilterClickDelegate>

@property (weak, nonatomic) AWEPOIDetailNGPOIMallFilterComponentViewModel *viewModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEPOIMallStatusErrorVC *errorVC;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEPOIDetailNGPOIMallFilterContainer *floorFilter;
@property (retain, nonatomic) AWEPOIDetailNGPOIMallFilterContainer *typeFilter;
@property (retain, nonatomic) AWEPOIDetailNGPOIMallFilterContainer *sortFilter;
@property (retain, nonatomic) AWEDitoPOIMallPageContext *floorContext;
@property (retain, nonatomic) AWEDitoPOIMallPageContext *typeContext;
@property (retain, nonatomic) AWEDitoPOIMallPageContext *sortContext;
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
