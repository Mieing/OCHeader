@class UILabel;

@interface AWEIMUnreadDotView : UIView

@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) long long count;
@property (nonatomic) double unreadDotHeight;
@property (nonatomic) BOOL shouldDisablePlus;

+ (double)getUnreadDotViewHeight;
+ (double)getUnreadDotViewFontSize;
+ (id)defaultDotColor;
+ (id)defaultDotTextColor;
+ (void)setDefaultDotColor:(id)a0;
+ (void)setDefaultDotTextColor:(id)a0;
+ (id)messageTabDotViewStyle;
+ (double)getUnreadDotViewFixWidth;

- (void)_appear;
- (long long)countOfShowingNum;
- (void)setDotTextColor:(id)a0;
- (void)updateWithoutDotLabelWithSize:(struct CGSize { double x0; double x1; })a0 count:(long long)a1;
- (void)updateToDotViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDotLabelAlpha:(double)a0;
- (void)setDotFont:(id)a0;
- (void)_disappear;
- (double)getDotHeight;
- (double)instanceGetUnreadDotViewFixWidth;
- (void).cxx_destruct;
- (void)setLabelHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabelAlignment:(long long)a0;
- (void)updateWithCount:(long long)a0;
- (void)setDotColor:(id)a0;
- (void)updateWithText:(id)a0;

@end
