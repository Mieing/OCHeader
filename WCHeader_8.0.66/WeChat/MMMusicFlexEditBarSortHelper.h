@class MMTimer, UIScrollView, NSMutableArray, UIView;
@protocol MMMusicFlexEditBarSortHelperDelegate;

@interface MMMusicFlexEditBarSortHelper : NSObject {
    UIScrollView *_scrollView;
    BOOL _bSortMode;
    UIView *_draggingRealCell;
    UIView *_draggingShadowCell;
    unsigned long long _initialShadowIndex;
    unsigned long long _curShadowIndex;
    NSMutableArray *_arrCellInfo;
    NSMutableArray *_arrSubView;
    MMTimer *_autoScrollTimer;
    double _autoScrollDiff;
}

@property (weak, nonatomic) id<MMMusicFlexEditBarSortHelperDelegate> delegate;

- (id)initWithScrollView:(id)a0;
- (void)commonInit;
- (BOOL)bSortMode;
- (id)arrSubView;
- (id)findCellByLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)doInitForSortWithLongPressLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)checkResortWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)autoScrollIfNeedWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)onAutoScrollTimer;
- (void)sortFromCellIndex:(unsigned long long)a0 toCellIndex:(unsigned long long)a1;
- (id)genShadowViewWithRealView:(id)a0;
- (void)onLongPressGes:(id)a0;
- (void).cxx_destruct;

@end
