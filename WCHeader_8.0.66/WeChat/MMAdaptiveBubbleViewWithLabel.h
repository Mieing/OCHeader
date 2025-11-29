@class UILabel;

@interface MMAdaptiveBubbleViewWithLabel : MMAdaptiveBubbleView

@property (retain, nonatomic) UILabel *mainPartTitleLabel;

- (id)initWithParams:(id)a0;
- (void)setupMainPartTitleLabel;
- (void)layoutMainPartContentView;
- (void)setTitleLabelText:(id)a0;
- (void).cxx_destruct;

@end
