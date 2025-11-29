@class NSArray, IESECSliceXScrollAction, NSValue, UIScrollView, NSHashTable, NSString;

@interface IESECSliceXScrollElementView : IESECSliceXBaseContainerElementView <SLIScrollSubjectProtocol>

@property (retain, nonatomic) NSArray *elementViews;
@property (retain, nonatomic) NSValue *needScrollToOffset;
@property (nonatomic) BOOL needRecordContentOffset;
@property (nonatomic) double scrollActionThreshold;
@property (nonatomic) double lastScrollActionTime;
@property (retain, nonatomic) IESECSliceXScrollAction *scrollAction;
@property (readonly, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) NSHashTable *scrollObserverTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)setupElementView;
- (id)flexSubviews;
- (BOOL)setupSubElementViews;
- (id)createCustomContainerView;
- (struct SLIScrollInfo { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })latestScrollInfo;
- (void)registerScrollObserver:(id)a0;
- (void)unregisterScrollObserver:(id)a0;
- (void)scrollViewContentOffsetDidChange:(id)a0 scrollView:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;

@end
