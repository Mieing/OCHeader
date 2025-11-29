@class YYSelectionGrabber, UIColor, NSTimer, NSArray, UIView, NSMutableArray;

@interface YYTextSelectionView : UIView

@property (retain, nonatomic) NSTimer *caretTimer;
@property (retain, nonatomic) UIView *caretView;
@property (retain, nonatomic) YYSelectionGrabber *startGrabber;
@property (retain, nonatomic) YYSelectionGrabber *endGrabber;
@property (retain, nonatomic) NSMutableArray *markViews;
@property (weak, nonatomic) UIView *hostView;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic, getter=isCaretBlinks) BOOL caretBlinks;
@property (nonatomic, getter=isCaretVisible) BOOL caretVisible;
@property (nonatomic, getter=isVerticalForm) BOOL verticalForm;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretRect;
@property (copy, nonatomic) NSArray *selectionRects;

- (void)_startBlinks;
- (void)_doBlink;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_standardCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isStartGrabberContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEndGrabberContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isGrabberContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isCaretContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isSelectionRectsContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
