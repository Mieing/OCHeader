@class RichTextView;

@interface WCFinderCornerTextBubbleView : MMUIView

@property (retain, nonatomic) RichTextView *richTextView;

+ (id)genRichTextViewByWidth:(double)a0;
+ (double)heightOfWidth:(double)a0 content:(id)a1;
+ (long long)getTextMaxLengthCountByTotalWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithContent:(id)a0;
- (void).cxx_destruct;

@end
