@class NSArray, UIImageView, IESLiveInteractiveBattleAnnounceView, IESLivePickerView, UILabel, NSString;
@protocol IESLiveTeamFightProvider;

@interface IESLiveTeamFightLaunchPanel : UIView <IESLivePickerSheetViewDelegate, IESLiveInteractiveBattleAnnounceViewDelegate>

@property (weak, nonatomic) IESLivePickerView *timePickerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *explainationView;
@property (retain, nonatomic) IESLiveInteractiveBattleAnnounceView *announceView;
@property (copy, nonatomic) NSArray *announceArray;
@property (weak, nonatomic) id<IESLiveTeamFightProvider> teamFightProvider;
@property (copy, nonatomic) NSString *requestPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;

- (id)extraParams;
- (void)onPickerViewConfirm:(id)a0;
- (id)preCheckTeamFightEnable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 DIContext:(id)a1;
- (void)teamFightBannerViewDidClickClose;
- (id)gameDurationStr:(long long)a0;
- (void)fetchAnnounce;
- (void)onRuleButtonClicked;
- (void)onTimeSelectClicked;
- (BOOL)isOnTeamfighting;
- (BOOL)isProcessTeamFight;
- (void)onStopGameButtonClicked;
- (void)onStartGameButtonClicked;
- (BOOL)enableOpenTeamFightWithTrack:(BOOL)a0;
- (void)onOneMoreButtonClicked;
- (void)showAnnounceUI;
- (void)hideAnnounceUI;
- (void)showFinishTeamFightConfirmModalDialog;
- (void).cxx_destruct;
- (void)setupUI;

@end
