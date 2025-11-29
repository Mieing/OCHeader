@class YYLabel;

@interface AWEPrivacyPCGuideView : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) YYLabel *label;

- (void)awe_themeDidChange:(long long)a0;
- (void)handleTapAction;
- (id)getAttributedText;
- (id)linkLabelWithText:(id)a0;
- (void).cxx_destruct;
- (void)setupView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
