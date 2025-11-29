@class UILabel, RichTextView, MMGradientView;

@interface MMFinderLiveHotSaleInfoView : UIView

@property (nonatomic) BOOL isDuringUpdate;
@property (nonatomic) unsigned long long value;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMGradientView *gradientView;
@property (retain, nonatomic) UILabel *valueLabel;

- (id)initWithWording:(id)a0 value:(unsigned long long)a1;
- (id)valueTextForValue:(unsigned long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateValue:(unsigned long long)a0;
- (void).cxx_destruct;

@end
