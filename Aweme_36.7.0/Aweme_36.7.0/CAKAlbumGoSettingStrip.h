@class UIImageView, UILabel, UIView, UIButton;

@interface CAKAlbumGoSettingStrip : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIImageView *headIcon;
@property (retain, nonatomic) UIImageView *nextIcon;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;

+ (double)getWidthWithTitle:(id)a0 font:(id)a1;
+ (BOOL)closedByUser;
+ (void)setClosedByUser;
+ (double)goSettingStripStyleOptimizeBarHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorStyle:(long long)a1 style:(long long)a2;
- (void).cxx_destruct;

@end
