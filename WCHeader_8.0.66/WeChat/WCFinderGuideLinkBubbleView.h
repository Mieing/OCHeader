@class WCFinderGuideLinkBubbleModel, RichTextView, MMWebImageView;

@interface WCFinderGuideLinkBubbleView : MMUIView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) WCFinderGuideLinkBubbleModel *model;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxWidth:(double)a1;
- (void)layoutAllSubviews;
- (void)updateWithModel:(id)a0;
- (void).cxx_destruct;

@end
