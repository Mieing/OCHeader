@class IESLiveActionSheetPresentViewController, NSString, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface IESLiveGuideLocationDetailPanelView : UIView

@property (retain, nonatomic) UISwitch *switcher;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *detailInfoView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (nonatomic) BOOL uiStyleV2;
@property (copy, nonatomic) id /* block */ switchDidClick;
@property (copy, nonatomic) id /* block */ panelDidHide;
@property (copy, nonatomic) id /* block */ detailDidClick;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) BOOL showLocation;

- (void)updatePanelState;
- (BOOL)isLocationOn;
- (void)onClickSwitchButton;
- (void)updateBgImageView;
- (void)setupLocatinInfoView;
- (void)updateLocationInfoViewPosition;
- (void)setupDetailButton;
- (void)updateDetailButton;
- (void)detailButtonDidClick;
- (void)trackSwitchClick;
- (void)triggerSwitchImapct;
- (id)initWithLocation:(id)a0 detail:(id)a1 showLocation:(BOOL)a2;
- (void)showDetailPanel;
- (void).cxx_destruct;
- (void)setupUI;

@end
