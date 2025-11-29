@class WCFinderRedDotTextLayout;

@interface WCFinderRedDotRichTextView : WCFinderRichTextView

@property (retain, nonatomic) WCFinderRedDotTextLayout *layout;
@property (readonly, nonatomic) BOOL isContentTruncatedOrInvisible;

- (id)initWithRemainWidth:(double)a0;
- (void)setContent:(id)a0;
- (double)getUntruncatedWidthMaxWidth:(double)a0;
- (void).cxx_destruct;

@end
