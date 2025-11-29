@class UITapGestureRecognizer;

@interface AWEIMHalfScreenMuteSwitchSettingCollectionViewCell : AWEIMHalfScreenSwitchSettingCollectionViewCell

@property BOOL shouldSetCorner;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

- (void)__accessClickSwitch;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
