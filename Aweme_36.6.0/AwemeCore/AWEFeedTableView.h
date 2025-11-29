@class NSString;
@protocol AWEFeedTableViewDelegate;

@interface AWEFeedTableView : AWEFeedDataSafeTableView <AWETableViewAccessibilityFixProtocol, AWEFeedTableViewProtocol>

@property (nonatomic) BOOL hasAnyAction;
@property (nonatomic) BOOL shouldAvoidCellForRowCalls;
@property (nonatomic) BOOL isShowAntiAddictMask;
@property (weak, nonatomic) id<AWEFeedTableViewDelegate> feedTableViewDelegate;
@property (copy, nonatomic) id /* block */ touchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)awe_shouldFixAccessibilityScroll;

- (id)visibleCells;
- (void)reportDataInconsistency:(id)a0;
- (id)automationElements;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;

@end
