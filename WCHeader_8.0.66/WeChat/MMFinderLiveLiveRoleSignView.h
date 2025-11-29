@class UILabel;

@interface MMFinderLiveLiveRoleSignView : UIView

@property (retain, nonatomic) UILabel *signLabel;
@property (nonatomic) long long style;

+ (double)insetTopForStyle:(long long)a0;
+ (struct CGSize { double x0; double x1; })signSizeWithText:(id)a0 font:(id)a1 boundingSize:(struct CGSize { double x0; double x1; })a2 style:(long long)a3;

- (id)init;
- (void)updateWithSignText:(id)a0 textColor:(id)a1 bgColor:(id)a2 font:(id)a3 style:(long long)a4;
- (void)updateSelfLayout;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
