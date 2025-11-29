@class WCSearchTextViewForwardDelegate;

@interface WCSearchTextView : MMGrowTextView

@property (retain, nonatomic) WCSearchTextViewForwardDelegate *forwardDelegate;
@property (nonatomic) BOOL isEditing;
@property (readonly, nonatomic) unsigned int lastMaxLines;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;

- (id)initWithOriginHeight:(double)a0;
- (id)initWithOriginHeight:(double)a0 extConfig:(id)a1;
- (void)setWcSearchDelegate:(id)a0;
- (unsigned int)calculateLines;
- (void)resetScrollPositionForIOS7;
- (id)selectedText;
- (id)confirmedText;
- (id)selectedAttributedText;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
