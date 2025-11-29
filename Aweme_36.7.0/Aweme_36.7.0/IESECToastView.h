@class NSString, UIImageView, UIImage, IESECToastConfig, UILabel;

@interface IESECToastView : UIView

@property (retain, nonatomic) IESECToastConfig *config;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double maxTotalWidth;
@property (nonatomic) double maxTotalHeight;

+ (void)showText:(id)a0 icon:(id)a1 withConfig:(id)a2 onView:(id)a3;
+ (void)showText:(id)a0 icon:(id)a1;
+ (void)showText:(id)a0 icon:(id)a1 withConfig:(id)a2;
+ (void)showText:(id)a0;

- (void)showOnView:(id)a0;
- (void)startShowAnimation;
- (void)setupVerticalStyle;
- (void)setupHorizontalStyle;
- (id)initWithConfig:(id)a0 text:(id)a1 icon:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
