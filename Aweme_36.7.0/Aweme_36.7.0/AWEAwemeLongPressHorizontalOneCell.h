@class UIColor, UIImageView, AFDLongPressContext, UILabel;

@interface AWEAwemeLongPressHorizontalOneCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) AFDLongPressContext *context;

- (void)setupUIWithContext:(id)a0;
- (void)updateDynamicTheme:(BOOL)a0;
- (void)updateTitle:(id)a0 titleColor:(id)a1;
- (void)updateIconWithImage:(id)a0;
- (void).cxx_destruct;

@end
