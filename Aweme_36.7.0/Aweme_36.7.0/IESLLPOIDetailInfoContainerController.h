@class NSArray, NSBlockOperation;
@protocol IESLLPOIDetailInfoContainerControllerDelegate;

@interface IESLLPOIDetailInfoContainerController : UIViewController

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (nonatomic) double contentHeight;
@property (nonatomic) long long firstLiveVcIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) BOOL cellsInitialized;
@property (retain, nonatomic) NSBlockOperation *operation;
@property (weak, nonatomic) id<IESLLPOIDetailInfoContainerControllerDelegate> delegate;

- (void)iesll_rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)poiDetail;
- (void)p_reloadData;
- (double)p_contentHeight;
- (id)constData;
- (void)p_createInitialCells;
- (void)p_updateViewHierarchy;
- (id)getViewModelForLayoutAttribute:(id)a0;
- (void)updateLayoutAttributeIfNeeded:(id)a0;
- (void)p_calculateLayoutAttributes;
- (void)p_buildViewHierarchy;
- (void)setupShowDelayAnimations;
- (BOOL)p_updateLayoutAttributes;
- (double)p_heightForItem:(id)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forModel:(id)a1;
- (void)hideViewForLayoutAttribute:(id)a0;
- (void)p_showItem:(id)a0 itemIndex:(long long)a1;
- (id)createViewModelForIdentifier:(id)a0;
- (void)p_generateDataSource;
- (void)updateInfoListHeightAnimated:(BOOL)a0;
- (BOOL)p_updateHeights;
- (void)updateTopHeaderOffsetIfNeeded:(id)a0;
- (id)layoutAttributeForDynamicId:(id)a0;
- (id)layoutAttributeForIdentifier:(id)a0;
- (void)removeViewForLayoutAttribute:(id)a0;
- (void)removeViewModelForIdentifier:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)store;

@end
