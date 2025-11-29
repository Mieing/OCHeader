@class UIStackView;

@interface MMScrollStack : UIScrollView

@property (nonatomic) long long axis;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long alignment;

- (id)init;
- (id)initWithAxis:(long long)a0;
- (id)initWithAxis:(long long)a0 contentMode:(unsigned long long)a1;
- (id)appendView:(id)a0 withNextSpace:(double)a1;
- (void)setActiveLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)appendSeparator;
- (void)appendSeparatorWithStartPadding:(double)a0;
- (void)appendSeparatorWithEndPadding:(double)a0;
- (id)appendSeparatorWithStartPadding:(double)a0 endPadding:(double)a1;
- (void)removeAllCells;
- (BOOL)isVertical;
- (void).cxx_destruct;

@end
