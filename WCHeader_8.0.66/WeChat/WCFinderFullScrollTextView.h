@class UIScrollView, WCFinderFeedContentTouchExpandTextView, WCFinderFeedContentTextViewConfig;

@interface WCFinderFullScrollTextView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderFeedContentTouchExpandTextView *contentLabel;
@property (readonly, nonatomic) WCFinderFeedContentTextViewConfig *config;
@property (nonatomic) double verticalMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfig;
- (void)applyLabelChange;
- (void).cxx_destruct;

@end
