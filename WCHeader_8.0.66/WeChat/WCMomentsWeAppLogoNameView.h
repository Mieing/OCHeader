@class UIImageView, UIFont, MMUILabel;

@interface WCMomentsWeAppLogoNameView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) MMUILabel *nameLabel;

+ (double)widthWithWeAppName:(id)a0 font:(id)a1;
+ (double)minWidthWithWeAppName:(id)a0 font:(id)a1;

- (id)initWithName:(id)a0 font:(id)a1;
- (void)updateWithWeAppName:(id)a0;
- (void)initLogoImageView;
- (void)initNameLabelWithName:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)minWidth;
- (void).cxx_destruct;

@end
