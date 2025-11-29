@class UILabel, UIImageView;

@interface AWEPushSettingReceiveWhoseNotificationCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL userSelected;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL pushEnable;
@property (nonatomic) BOOL inner;

- (void)__setupUI;
- (void)__resetUIStyle;
- (void)configWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
