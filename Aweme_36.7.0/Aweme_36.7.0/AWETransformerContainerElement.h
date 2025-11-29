@class NSString, UIView;
@protocol AWETransformerLayoutStrategyProtocol;

@interface AWETransformerContainerElement : AWETransformerGroupElement <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) UIView *slideBackView;
@property (nonatomic) BOOL isAdaptive;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<AWETransformerLayoutStrategyProtocol> containerLayoutStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementType;

- (double)originWidth;
- (double)originHeight;
- (void)elementDidAppear;
- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)renderElement;
- (void)elementWillDisappear;
- (void)clearLayoutInfo;
- (BOOL)hasStructDiffWithNewElement:(id)a0;
- (void)updateWithNewElement:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)layout;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)loadView;
- (id)visibleElements;

@end
