@class UIImageView, UISwitch, UILabel, UIView, CreateInfoResponse_ConfigItem;

@interface IESLiveGuideAbilityPanelCell : UITableViewCell

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UILabel *leftSubTitle;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UISwitch *rightSwitch;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) CreateInfoResponse_ConfigItem *configItem;
@property (retain, nonatomic) UIView *topSeparator;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long liveType;

- (void)configWithItem:(id)a0;
- (void)handleItemTappedTrack:(id)a0;
- (void)trackEvent:(id)a0 extraTrackParams:(id)a1;
- (void)triggerSwitch:(id)a0;
- (void)updateDisable:(BOOL)a0;
- (void)prepareUILayout;
- (id)stringfromLiveType;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;

@end
