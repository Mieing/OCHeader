@class UIImageView, UILabel, UIView;

@interface AWELiveShelfNativeMarketingToolView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *prefixBgView;
@property (retain, nonatomic) UIImageView *prefixIcon;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIImageView *curveImage;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIImageView *prefixBgImage;

- (void)configWithMarketingToolModel:(id)a0 hasLottery:(BOOL)a1 feConfig:(id)a2 rightWidth:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
