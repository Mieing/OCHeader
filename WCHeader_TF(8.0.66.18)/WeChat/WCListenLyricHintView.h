@class MMUILabel, MMUIActivityIndicatorView;

@interface WCListenLyricHintView : MMUIView

@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (nonatomic) unsigned long long mode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setEmptyText:(id)a0;
- (void).cxx_destruct;

@end
