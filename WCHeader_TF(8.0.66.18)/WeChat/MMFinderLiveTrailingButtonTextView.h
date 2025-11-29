@class NSString, MMFinderLiveTrailingButtonTextViewStyle, RichTextView, MMUIButton;

@interface MMFinderLiveTrailingButtonTextView : UIView <RichTextLayoutDelegate>

@property (retain, nonatomic) RichTextView *subtitleTextView;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) MMFinderLiveTrailingButtonTextViewStyle *style;
@property (copy, nonatomic) id /* block */ onTrailingButtonTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(id)a0;
- (void)sizeToFitWithMaxWidth:(double)a0;
- (void)updateWithStyle:(id)a0;
- (void)setText:(id)a0;
- (void)initSubviews;
- (void)reloadUIWithCurrentStyle;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void)onButtonTapped;
- (void).cxx_destruct;

@end
