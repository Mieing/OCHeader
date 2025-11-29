@class NSString, LynxListLayoutManager, NSMutableDictionary, LynxUIListInvalidationContext, LynxUIListDataSource, NSMutableArray, NSDictionary, NSNumber, LynxUIListScrollThresholds;

@interface LynxUIListLight : LynxUI <LynxUIComponentLayoutObserver>

@property (retain, nonatomic) LynxUIListDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *reuseIdentifiers;
@property (readonly, nonatomic) NSMutableArray *currentItemKeys;
@property (readonly, nonatomic) NSMutableArray *fullSpanItems;
@property (readonly, nonatomic) NSMutableArray *stickyTopItems;
@property (readonly, nonatomic) NSMutableArray *stickyBottomItems;
@property (readonly, nonatomic) NSMutableArray *fiberFullSpanItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyTopItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyBottomItems;
@property (readonly, nonatomic) NSMutableDictionary *estimatedHeights;
@property (retain, nonatomic) LynxUIListInvalidationContext *currentNodiffContext;
@property (retain, nonatomic) LynxUIListInvalidationContext *generalPropsInfo;
@property (weak, nonatomic) LynxListLayoutManager *layout;
@property (retain, nonatomic) LynxUIListScrollThresholds *scrollThreSholds;
@property (retain, nonatomic) NSNumber *initialScrollIndex;
@property (retain, nonatomic) NSDictionary *listNoDiffInfo;
@property (copy, nonatomic) NSDictionary *diffResultFromTasm;
@property (copy, nonatomic) NSDictionary *curComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__561;
+ (id)__lynx_props_group_config__370;
+ (id)__lynx_prop_config__902;
+ (id)__lynx_ui_method_config__3530;

- (void)setSign:(long long)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)propsDidUpdate;
- (void)onNodeReady;
- (void)scrollToPosition:(id)a0 withResult:(id /* block */)a1;
- (void)setUpperThreshold:(id)a0 requestReset:(BOOL)a1;
- (void)setLowerThreshold:(id)a0 requestReset:(BOOL)a1;
- (void)setVerticalOrientation:(BOOL)a0;
- (void)onComponentLayoutUpdated:(id)a0;
- (void)onAsyncComponentLayoutUpdated:(id)a0 operationID:(long long)a1;
- (void)setScrollEventThrottle:(id)a0 requestReset:(BOOL)a1;
- (void)setUpperThresholdItemCount:(id)a0 requestReset:(BOOL)a1;
- (void)setLowerThresholdItemCount:(id)a0 requestReset:(BOOL)a1;
- (void)setNeedsVisibleCells:(id)a0 requestReset:(BOOL)a1;
- (void)setColumnCount:(long long)a0 requestReset:(BOOL)a1;
- (void)setListMainAxisGap:(double)a0 requestReset:(BOOL)a1;
- (void)setListCrossAxisGap:(double)a0 requestReset:(BOOL)a1;
- (void)setListType:(id)a0 requestReset:(BOOL)a1;
- (void)setInitialScrollIndex:(id)a0 requestReset:(BOOL)a1;
- (void)setInternalCellPrepareForReuseNotification:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setCurComponents:(id)a0 requestReset:(BOOL)a1;
- (void)updateListActionInfo:(id)a0 requestReset:(BOOL)a1;
- (void)updateListActionInfo:(id)a0;
- (id)loadListInfo:(id)a0 components:(id)a1;
- (void)setVerticalOrientation:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableFadeInAnimation:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setUpdateAnimationFadeInDuration:(long long)a0 requestReset:(BOOL)a1;
- (void)setPreloadBuffer:(long long)a0 requestReset:(BOOL)a1;
- (void)setAnchorPriorityFromBegin:(id)a0 requestReset:(BOOL)a1;
- (void)setDeleteRegressPolicyToTop:(id)a0 requestReset:(BOOL)a1;
- (void)setInsertAnchorModeInside:(id)a0 requestReset:(BOOL)a1;
- (void)setAnchorVisibility:(id)a0 requestReset:(BOOL)a1;
- (void)setAnchorAlignToBottom:(id)a0 requestReset:(BOOL)a1;
- (void)registerAllReuseIdentifiers:(id)a0;
- (void)transformExtraData;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAsync;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
