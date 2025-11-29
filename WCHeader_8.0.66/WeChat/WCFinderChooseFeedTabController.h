@class NSString, WCFinderChooseFeedTabControllerConfig, WCFinderFeedContentVM, WCFinderFeedFlowView, WCFinderChooseFeedTabViewModel;
@protocol WCFinderChooseFeedTabControllerDelegate;

@interface WCFinderChooseFeedTabController : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderChooseFeedTabViewModelDelegate, WCFinderFeedFlowViewDelegate, WCFinderFeedPickerCollectionViewCellDelegate>

@property (retain, nonatomic) WCFinderChooseFeedTabControllerConfig *config;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderChooseFeedTabViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedContentVM *selectedVM;
@property (weak, nonatomic) id<WCFinderChooseFeedTabControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabModel:(id)a0 config:(id)a1;
- (void)onSwitchToThisPage:(BOOL)a0;
- (void)setSelfViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSuperView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrame;
- (void)setViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)tabType;
- (double)topInset;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (BOOL)_isLimitByLimiter:(id)a0;
- (void)setSelectionCell:(id)a0 contentVm:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (unsigned long long)finderFeedFlowView:(id)a0 columnCountAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (void)finderChooseFeedTabVMDataChange:(id)a0 hasMore:(BOOL)a1;
- (void)onFinderFeedPickerSelectedCell:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;

@end
