@class UIColor, NSString, UILabel, UIView, NSNumber;

@interface AWELiveStatusIndicatorView : UIView <AWELiveStatusViewProtocol>

@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) NSNumber *fixedThemeStyle;
@property (readonly, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)awe_themeReload;
- (void)updateLiveStatusContent:(id)a0;
- (struct CGColor { } *)p_indicatorBorderColor;
- (void)specifyIndicatorBorderColor:(id)a0;
- (void)specifyFixedThemeStyle:(long long)a0;
- (void)p_initUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
