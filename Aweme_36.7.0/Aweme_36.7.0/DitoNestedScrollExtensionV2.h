@class DitoPageContext, DitoNestedScrollItem, NSMutableDictionary, NSString, NSMutableArray, NSLock;
@protocol DitoExtensionContainerProtocol;

@interface DitoNestedScrollExtensionV2 : NSObject <DitoExtensionProtocol, DitoScrollViewDelegateProtocol_Private, DitoHalfContainerDelegateProtocol>

@property (retain, nonatomic) DitoNestedScrollItem *sideBarItem;
@property (retain, nonatomic) NSMutableDictionary *itemMap;
@property (retain, nonatomic) NSMutableArray *itemArr;
@property (nonatomic) double outsideOffsetY;
@property (nonatomic) BOOL skipScrollLoop;
@property (nonatomic) double bodyPreCostOffsetY;
@property (retain, nonatomic) NSMutableDictionary *interceptDitoBodyScrollMap;
@property (retain, nonatomic) NSLock *mapLock;
@property (copy, nonatomic) NSString *nestedScrollStateItemTag;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (nonatomic) BOOL skipNestedScrollExtension;
@property BOOL enableDitoScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)componentView:(id)a0 didUpdateViewModel:(id)a1;
- (BOOL)shouldIgnoreGesture:(id)a0 state:(long long)a1 direction:(unsigned long long)a2 currentDirection:(unsigned long long)a3 containerOffset:(double)a4;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)initializeExtension;
- (id)sideBarScrollView;
- (void)setInterceptDitoBodyScroll:(BOOL)a0 withTag:(id)a1;
- (BOOL)enableDitoBodyScroll;
- (BOOL)enableDitoListScroll;
- (BOOL)isInNestedScrollStateWithNodeTagArr:(id)a0;
- (id)stickManger;
- (void)resetTopAndBottomWithNodeTag:(id)a0;
- (void)updateNestedScrollState;
- (BOOL)interruptDispatchScrollEventWhenPageDidScroll:(id)a0;
- (double)getTotalOffset;
- (double)getNestedScrollViewOriginY:(id)a0;
- (double)getNestedScrollTopLineAboveNodeTag:(id)a0;
- (void)findSideBarWithComponentView:(id)a0 didUpdateViewModel:(id)a1;
- (void)updateItemArrOrder;
- (void)__resetNestedScrollView:(id)a0 offsetY:(double)a1;
- (BOOL)isLynxListAdjustingContentOffsetWithNestedScrollView:(id)a0;
- (void)sideBarScrollDispatchWithOriginOffset:(struct CGPoint { double x0; double x1; })a0 deltaY:(double)a1;
- (void)resetNestedScrollView:(id)a0 offsetY:(double)a1;
- (void)pageScrollDispatch;
- (BOOL)askHalfScreenConsume;
- (id)askBodyContainerCostWithInputOffsetY:(double)a0 nestedScrollItem:(id)a1;
- (id)askNestedScrollCostWithInputOffsetY:(double)a0 nestedScrollItem:(id)a1;
- (BOOL)isInNestedScrollStateWithNodeTag:(id)a0;
- (BOOL)getInterceptDitoBodyScrollWithTag:(id)a0;
- (void)resetBodyViewWithOffsetY:(double)a0;
- (double)getNestedScrollViewMaxOffsetY:(id)a0;
- (void)setNestedScrollView:(id)a0 offsetY:(double)a1;
- (void)__setNestedScrollView:(id)a0 offsetY:(double)a1;
- (void)setBodyViewWithOffsetY:(double)a0;
- (BOOL)isInNestedScrollState;
- (void)setBodyViewWithDeltaY:(double)a0;
- (void)setNestedScrollView:(id)a0 scrollToPosition:(id)a1;
- (id)getTagWithNestedScrollView:(id)a0;
- (BOOL)isNestedScrollView:(id)a0;
- (double)cardMarginTopWithTag:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
