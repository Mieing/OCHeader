@class AWESearchPhotoSearchEntranceConfig, UIImageView, UILabel, UIView;

@interface AWESearchPhotoSearchEntrancePopover : DUXPopover

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWESearchPhotoSearchEntranceConfig *config;

- (void)refactorUIStyleWithConfig:(id)a0;
- (void)setupEntrancePopover;
- (id)priorityTitle;
- (id)popoverPressColor;
- (BOOL)coverViewCanPenetrate;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)popoverColor;

@end
