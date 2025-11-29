@class UIBezierPath, NSAttributedString, NSArray;

@interface BDASTextLayoutFrame : NSObject {
    struct __CTFrame { } *_textFrame;
    struct __CTFramesetter { } *_framesetter;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } requestedStringRange;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) UIBezierPath *layoutPath;
@property (nonatomic) BOOL layoutPathExtended;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } constraintRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalConstraintRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBoundingRect;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleStringRange;
@property (copy, nonatomic) NSArray *layoutLines;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *truncationString;
@property (nonatomic) BOOL forceLayout;
@property (nonatomic) BOOL trailingWhitespaceLinesWhenTruncated;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) BOOL isTruncated;
@property (readonly, nonatomic) unsigned long long lineCount;

- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 isCancelled:(id /* block */)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRangeForLineCount:(unsigned long long)a0;
- (void)buildLines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForLineCount:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })convertPointToLayoutCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithLayouter:(id)a0 stringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToLayoutCoordinate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
