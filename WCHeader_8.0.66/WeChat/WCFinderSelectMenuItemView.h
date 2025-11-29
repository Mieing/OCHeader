@class NSString, RichTextView;

@interface WCFinderSelectMenuItemView : UIControl

@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double cornerRadius;

+ (double)estimatedHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getMaxWidth;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
