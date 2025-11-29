@class RichTextView, UIView;

@interface WCFinderWarningPanelView : MMUIView

@property (retain, nonatomic) RichTextView *lowBitRateTextView;
@property (retain, nonatomic) RichTextView *durationRecomTextView;
@property (retain, nonatomic) UIView *shortTitleView;

- (void)updateFlag:(unsigned long long)a0 content:(id)a1;
- (void)showViewAsFlag:(unsigned long long)a0;
- (void)bindClickBlockToFlag:(unsigned long long)a0 clickBlock:(id /* block */)a1;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
