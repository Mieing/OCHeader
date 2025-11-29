@class UILabel, UIImageView, UIView;

@interface AWETeenFeedSegmentItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *yellowDot;
@property (retain, nonatomic) UIImageView *channelSwitch;

- (void)channelSwitchTurnOn:(BOOL)a0 isDark:(BOOL)a1;
- (void)updateTitleName:(id)a0;
- (void)updateTitleColor:(id)a0 isDark:(BOOL)a1;
- (void)shouldShowChannelSwitch:(BOOL)a0;
- (void)shouldShowYellowDot:(BOOL)a0;
- (BOOL)isShowYellowDot;
- (void)updateTitleAlpha:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
