@class UILabel, AWEGradientView;

@interface AWEUserWorkDynamicLabelView : UIView

@property (retain, nonatomic) UILabel *dynamicLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (void)configText:(id)a0;
- (void)configColor:(id)a0;
- (double)dynamicLabelWidth;
- (void).cxx_destruct;
- (id)init;
- (void)updateFontSize:(double)a0;

@end
