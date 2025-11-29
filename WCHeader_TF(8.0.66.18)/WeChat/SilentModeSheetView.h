@class UIImageView, MMUILabel, UIButton;

@interface SilentModeSheetView : MMAutoLayoutSheetView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmButton;

- (id)init;
- (void)initConfigs;
- (void)initView;
- (void).cxx_destruct;

@end
