@class UILabel, UIImageView;

@interface AWESearchMuteView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *muteImage;
@property (nonatomic) BOOL isShorten;

- (void)startAutoHideIfNeeded;
- (void)openMuteAbility;
- (void)shortenAnimation;
- (void)setMuteFrame;
- (void)closeMuteAbility;
- (void)shortenWithoutAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)setUpUI;

@end
