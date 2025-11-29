@class NSMutableDictionary, MMLockOverlayView, NSMutableArray, MMLockCircle;
@protocol MMPatternLockViewDelegate;

@interface MMPatternLockView : UIView

@property (retain, nonatomic) MMLockCircle *selectedCell;
@property (retain, nonatomic) MMLockOverlayView *overLay;
@property (nonatomic) long long oldCellIndex;
@property (nonatomic) long long currentCellIndex;
@property (retain, nonatomic) NSMutableDictionary *drawnLines;
@property (retain, nonatomic) NSMutableArray *finalLines;
@property (retain, nonatomic) NSMutableArray *cellsInOrder;
@property (weak, nonatomic) id<MMPatternLockViewDelegate> delegate;

+ (double)heightOfLockView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpTheView;
- (void)calculateCirclePosition;
- (void)resetView;
- (void)initData;
- (void)onPwdError;
- (void)onPwdCorrect;
- (long long)indexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)indexForCell:(id)a0;
- (id)cellAtIndex:(long long)a0;
- (id)uniqueLineIdForLineJoiningPoint:(long long)a0 AndPoint:(long long)a1;
- (void)endPattern;
- (void)addGestureRecognizer;
- (void)gestured:(id)a0;
- (void)handlePanAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleCircleSkip;
- (void)highlightSelectCell:(id)a0;
- (void).cxx_destruct;

@end
