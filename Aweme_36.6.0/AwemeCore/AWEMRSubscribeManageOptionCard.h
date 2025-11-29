@class UIImageView, UILabel, AWEMRSubscribeManageOptionCardConfig, DUXCheckBox;

@interface AWEMRSubscribeManageOptionCard : UIView

@property (retain, nonatomic) AWEMRSubscribeManageOptionCardConfig *config;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXCheckBox *checkBox;

+ (double)suggestHeight;
+ (struct CGSize { double x0; double x1; })suggestImageSize;

- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
