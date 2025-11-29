@class UILabel, NSString;

@interface AWEECOMIMChatSearchPriorityMiddleLabelView : UIView

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *middleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *defaultColor;

- (id)createLabelWithLineBreakMode:(long long)a0 colorStr:(id)a1;
- (id)initWithFontSize:(double)a0 defaultColor:(id)a1;
- (void)setLeftText:(id)a0 middleText:(id)a1 rightText:(id)a2;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;

@end
