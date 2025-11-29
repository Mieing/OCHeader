@class DitoPageContext, NSMutableDictionary, NSString, UIScrollView;
@protocol DitoExtensionContainerProtocol;

@interface DitoNestedScrollExtension : NSObject <DitoNestedScrollItemDelegate, DitoExtensionProtocol, DitoScrollViewDelegateProtocol_Private>

@property (retain, nonatomic) NSMutableDictionary *itemMap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } nestedInsets;
@property (nonatomic) double scrollMargin;
@property (nonatomic) BOOL skipScroll;
@property (weak, nonatomic) UIScrollView *bodyContainer;
@property (nonatomic) BOOL nestedScrollDispatchEventOptimize;
@property (nonatomic) BOOL frameScroll;
@property (nonatomic) double remainContentToTop;
@property (nonatomic) double remainContentToBottom;
@property (readonly, nonatomic) BOOL nestedScrollV2Enable;
@property (readonly, nonatomic) BOOL viscousDragEnable;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageDidScroll:(id)a0;
- (void)pageDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)pageDidEndDecelerating:(id)a0;
- (void)componentView:(id)a0 didUpdateViewModel:(id)a1;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)initializeExtension;
- (void)updateComponentNestedScrollItem:(id)a0 viewModel:(id)a1;
- (void)setupComponentNestedScrollEnabled:(id)a0 nestedScrollEnabled:(BOOL)a1;
- (id)stickManger;
- (void)resetTopAndBottomWithNodeTag:(id)a0;
- (BOOL)interruptDispatchScrollEventWhenPageDidScroll:(id)a0;
- (void)halfContainerUpdateContentOffset:(double)a0;
- (BOOL)viscousDragging;
- (BOOL)nestedScrolling;
- (BOOL)nestedScrollViewActivate;
- (BOOL)viscousDragViewBeActivate;
- (double)decelerationRemainContentToTop;
- (double)decelerationRemainContentToBottom;
- (void)tryStopComponentNestedScrollDecelerate:(id)a0;
- (void)updateNestedScrollItemPositionToTopLine:(id)a0;
- (void)setupViscousDragItemList:(id)a0;
- (id)nestedScrollHandler:(id)a0;
- (void)nested_DidEndScroll:(id)a0;
- (void)afterEndScroll:(id)a0 nestedScrollItem:(id)a1;
- (void)didSetContentOffset:(id)a0;
- (void)didScroll:(id)a0 nestedScrollItem:(id)a1;
- (void)afterDidScroll:(id)a0 nestedScrollItem:(id)a1;
- (void)setupNestedInsets:(id)a0 nestedScrollItem:(id)a1;
- (double)topBreakLineInBodyContainer;
- (void)setupPerfectOffset:(id)a0 withScrollView:(id)a1;
- (void)tryUpdateNestedScrollState:(id)a0 nestedScrollItem:(id)a1;
- (double)nestedScrollTopInsetLine;
- (void)willViscousDragBodyContainer:(id)a0 viscousDragItem:(id)a1;
- (void)viscousDragBodyContainerToContentOffset:(struct CGPoint { double x0; double x1; })a0 nestedScrollItem:(id)a1 viscousDragItem:(id)a2;
- (void)didViscousDragBodyContainer:(id)a0 viscousDragItem:(id)a1;
- (double)nestedScrollViewContentOffset;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (id)bodyContainerView;

@end
