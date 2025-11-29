@class NSPointerArray, AWEBinding, UIScrollView;

@interface BDVScrollViewEventManager : NSObject

@property (nonatomic) BOOL KVOCalling;
@property (nonatomic) BOOL scrollViewObserved;
@property (retain, nonatomic) NSPointerArray *scrollDelegateArray;
@property (retain, nonatomic) NSPointerArray *sizeDelegateArray;
@property (weak, nonatomic) AWEBinding *contentOffsetBinding;
@property (weak, nonatomic) AWEBinding *contentSizeBinding;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;

+ (void)NSPointerArrayRemoveObject:(id)a0 object:(void *)a1;

- (void)contentOffsetDidChanged:(id)a0;
- (void)contentSizeDidChanged:(id)a0;
- (void)addScrollEventDelegate:(id)a0;
- (void)removeScrollEventDelegate:(id)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)end;

@end
