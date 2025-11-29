@class UILabel, NSString;

@interface MMBaseTimeLabel : UIView {
    NSString *_prefix;
}

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UILabel *suffixLabel;
@property (nonatomic) unsigned long long seconds;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *maxWidthTime;
@property (nonatomic) BOOL hideHours;

+ (double)widthWithPrefix:(id)a0 font:(id)a1 maxWidthTime:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
