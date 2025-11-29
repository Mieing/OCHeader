@class UILabel;

@interface IESLiveImageLabelButton : IESLiveButton

@property (retain, nonatomic) UILabel *dummyLabel;
@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double space;
@property (nonatomic) BOOL enlargeImageWhenHighlighted;

+ (id)buttonWithInsetStyle:(unsigned long long)a0 space:(double)a1 shadow:(BOOL)a2;
+ (id)buttonWithInsetStyle:(unsigned long long)a0 space:(double)a1;

- (void)addDummyLabelIfNeeded;
- (void)layoutComponentsIfNeeded;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutComponents;

@end
