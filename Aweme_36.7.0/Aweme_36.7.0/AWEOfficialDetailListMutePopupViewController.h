@class NSString, UIImageView, NSURL, UILabel, UIView;
@protocol IESIMSwitchProtocol;

@interface AWEOfficialDetailListMutePopupViewController : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *switchAreaBackgroundView;
@property (retain, nonatomic) UILabel *switchAreaTitleLabel;
@property (retain, nonatomic) UILabel *switchAreaSubtitleLabel;
@property (retain, nonatomic) UIView<IESIMSwitchProtocol> *muteSwitch;
@property (retain, nonatomic) NSURL *iconUrl;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL isSwitchOn;
@property (copy, nonatomic) id /* block */ switchChangeActionBlock;

+ (double)contentViewHeight;

- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)config;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)switchValueChanged:(BOOL)a0;

@end
