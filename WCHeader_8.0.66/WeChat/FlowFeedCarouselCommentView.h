@class MMLiveFlowFeedCarouselCommentItem, RichTextView;

@interface FlowFeedCarouselCommentView : UIView

@property (retain, nonatomic) MMLiveFlowFeedCarouselCommentItem *comment;
@property (retain, nonatomic) RichTextView *textLabel;

+ (double)rowHeight:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithComment:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)layoutSubviews;
- (double)calTextWidth:(id)a0;
- (id)calculateDisplayContent;
- (void).cxx_destruct;

@end
