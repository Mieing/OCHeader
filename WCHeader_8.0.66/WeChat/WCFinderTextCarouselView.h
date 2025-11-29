@class UIColor, MMTimer, NSArray, WCFinderRichTextView;

@interface WCFinderTextCarouselView : UIView

@property (retain, nonatomic) WCFinderRichTextView *textView;
@property (retain, nonatomic) WCFinderRichTextView *textAnimationView;
@property (retain, nonatomic) MMTimer *carouselTimer;
@property (retain, nonatomic) NSArray *textArray;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIColor *textColor;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithTextArray:(id)a0;
- (id)displayText;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startCarousel;
- (void)stopCarousel;
- (void)layoutUI;
- (void)scrollToNext;
- (id)genTextView;
- (void).cxx_destruct;

@end
