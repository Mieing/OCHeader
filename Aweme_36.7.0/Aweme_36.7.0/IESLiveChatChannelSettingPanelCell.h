@class NSString, IESLiveChatChannelSettingPanelModel, UISwitch, UIImageView, UIView, UILabel, IESLiveChatChannelSettingVolumeSlider;
@protocol IESLiveChatChannelSettingPanelCellDelegate;

@interface IESLiveChatChannelSettingPanelCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESLiveChatChannelSettingPanelModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *switcherContainer;
@property (retain, nonatomic) UISwitch *switcher;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) IESLiveChatChannelSettingVolumeSlider *slider;
@property (weak, nonatomic) id<IESLiveChatChannelSettingPanelCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0;

- (void)configWithModel:(id)a0;
- (void)toggleSwitched:(id)a0;
- (void)renderUI;
- (void)updateCorner:(unsigned long long)a0 radius:(double)a1;
- (void)hideSeperateLine;
- (void)loadAccessibilty;
- (void)tapSwitch:(id)a0;
- (void)sliderProgressSliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)accessibilityElements;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
