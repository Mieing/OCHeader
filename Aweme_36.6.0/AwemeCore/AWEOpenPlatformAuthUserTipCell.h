@class UILabel;

@interface AWEOpenPlatformAuthUserTipCell : UITableViewCell

@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL isHalf;

+ (struct CGSize { double x0; double x1; })tipLabelHeightWithText:(id)a0 maxWidth:(double)a1;
+ (id)tipsLableFont;
+ (double)cellHeightWithTipText:(id)a0 maxWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isHalf:(BOOL)a2;
- (void)updateTip:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
