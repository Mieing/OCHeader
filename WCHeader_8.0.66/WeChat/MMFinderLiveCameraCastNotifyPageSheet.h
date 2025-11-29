@class UILabel, UIImageView, UIButton;

@interface MMFinderLiveCameraCastNotifyPageSheet : MMPageSheetBaseView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ onNoitfyConfirm;

- (id)init;
- (void)setupPageSheetConfig;
- (void)initViews;
- (BOOL)useCompactLayoutPadding;
- (void)layoutSubviews;
- (void)onConfirm;
- (void).cxx_destruct;

@end
