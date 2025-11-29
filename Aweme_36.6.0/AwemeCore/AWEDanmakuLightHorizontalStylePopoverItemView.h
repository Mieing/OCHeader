@class UIImageView, UILabel, AWEDanmakuPopoverItemDescLabelConfig;

@interface AWEDanmakuLightHorizontalStylePopoverItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEDanmakuPopoverItemDescLabelConfig *descLabelConfig;

+ (id)descLabelFont;

- (void)updateImage:(id)a0;
- (void)setUI;
- (void)configBasicParams;
- (void)configDescLabelText:(id)a0 textColor:(id)a1;
- (void)layoutDescLabelIfNeed:(id)a0 update:(BOOL)a1;
- (id)initWithImage:(id)a0 descLabelConfig:(id)a1;
- (void)updateDescLabelIfNeed:(id)a0 textColor:(id)a1;
- (void)showDiggAnimationIfNeed:(id)a0;
- (void).cxx_destruct;

@end
