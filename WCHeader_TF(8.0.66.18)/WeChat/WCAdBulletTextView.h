@class NSString, MMUILabel, WCAdBulletScreenTextStyleInfo;

@interface WCAdBulletTextView : MMUIView

@property (retain, nonatomic) NSString *bulletText;
@property (retain, nonatomic) WCAdBulletScreenTextStyleInfo *bulletTextStyle;
@property (retain, nonatomic) MMUILabel *bulletTextLabel;

+ (struct CGSize { double x0; double x1; })calcBulletTextViewSizeWithBulletText:(id)a0 font:(id)a1;
+ (id)fetchBulletTextFontWithTextStyle:(id)a0;
+ (id)fetchBulletTextColorWithTextStyle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bulletText:(id)a1 bulletTextStyle:(id)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
