@class DitoPageContext, NSString, HalfContainerParams, UIScrollView;
@protocol DitoHalfContainerProtocol, DitoExtensionContainerProtocol;

@interface AWEPOIHalfContainerExtension : NSObject <UIGestureRecognizerDelegate, DitoExtensionProtocol, VSDContainerDelegate>

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HalfContainerParams *params;
@property (retain, nonatomic) id<DitoHalfContainerProtocol> mvManager;
@property (nonatomic) BOOL isHeaderPhotoExpanded;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isFirstTimeReload;
@property (nonatomic) long long currentViewState;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)didEndParseLoadMoreData:(id)a0 error:(id)a1;
- (void)didLoadPageModel:(id)a0;
- (void)didEndReload;
- (id /* block */)customCollapseAnimationBlock;
- (id /* block */)customHalfExpandAnimationBlock;
- (id /* block */)customDismissWithAnimationBlock;
- (BOOL)shouldIgnoreGesture:(id)a0 state:(long long)a1 diretion:(unsigned long long)a2 containerOffset:(double)a3;
- (void)didHandleHalfContainerGesture:(id)a0 scrollView:(id)a1 state:(long long)a2 diretion:(unsigned long long)a3 containerOffset:(double)a4;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)didHalfContainerTapMaskView:(id)a0;
- (double)customExtraOffsetWhenCollapseAnchor;
- (void)vsdContainer:(id)a0 stateChange:(unsigned long long)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)initializeExtension;
- (void)startInitialAnimation;
- (id)getConvertedDelegate;
- (double)initialModalViewRatio;
- (void)updateOffsetToContext:(id)a0;
- (id)halfContainerParams;
- (BOOL)isExpandStates:(long long)a0;
- (void)notifyLynxHeaderToExpandPhotos:(BOOL)a0;
- (void)updateBodyOffsetIfNeeded:(double)a0;
- (double)initialModalViewOriginY;
- (void)hiddenFloatContainerWhenDismiss;
- (void)hideHeaderContainerWhenDismiss;
- (double)lowerBoundaryFromHalfToCollapse;
- (double)upperBoundaryFromHalfToCollapse;
- (double)targetRatioByTargetOffset:(double)a0 upperRatio:(double)a1 lowerRatio:(double)a2 upperOffset:(double)a3 lowerOffset:(double)a4;
- (double)upperBoundaryFromDismissToHalf;
- (double)lowerBoundaryFromDismissToHalf;
- (double)convertRatioByOriginY:(double)a0;
- (double)upperBoundaryFromCollapseToFull;
- (double)lowerBoundaryFromCollapseToFull;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
