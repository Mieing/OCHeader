@class CAGradientLayer, NSString, UIImageView, NSArray, UILabel, IESLiveMultiKTVMidiTagViewConfig;

@interface IESLiveMultiKTVMidiTagView : UIView

@property (retain, nonatomic) IESLiveMultiKTVMidiTagViewConfig *config;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CAGradientLayer *gradientBackgoundLayer;
@property (copy, nonatomic) NSString *textStr;
@property (copy, nonatomic) NSString *iconURLStr;
@property (copy, nonatomic) NSArray *backgroundColorStr;

- (id)initWithStyle:(long long)a0 textStr:(id)a1 iconURLStr:(id)a2 backgroundColorStr:(id)a3;
- (void)p_addView:(id)a0;
- (void)p_removeView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
