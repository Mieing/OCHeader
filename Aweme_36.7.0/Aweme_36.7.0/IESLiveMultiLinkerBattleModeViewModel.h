@class NSArray, BattleConfigSetting, NSString, IESLiveMultiBattlePrepareUsersViewConfig, IESLiveMultiPKModeInfo;
@protocol IESLiveMultiLinkerProvider;

@interface IESLiveMultiLinkerBattleModeViewModel : NSObject <IESLiveInteractiveUserServiceDelegate, IESLiveInteractiveLinkServiceDelegate, IESLiveInteractAnchorLinkersViewDelegate>

@property (nonatomic) unsigned long long currentMode;
@property (copy, nonatomic) NSArray *linkers;
@property (nonatomic) BOOL battleStartEnabled;
@property (retain, nonatomic) BattleConfigSetting *panelBattleConfig;
@property (retain, nonatomic) IESLiveMultiPKModeInfo *modeInfo;
@property (retain, nonatomic) IESLiveMultiBattlePrepareUsersViewConfig *usersConfig;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> mLinkerProvider;
@property (copy, nonatomic) NSString *toastStr;
@property (copy, nonatomic) NSString *battleConfigStr;
@property (nonatomic) unsigned long long currentSelectedUsersCount;
@property (nonatomic) BOOL isSelfTeamLayoutRight;
@property (nonatomic) BOOL isAlreadyChangedTeam;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL canSwitchPKMode;
@property (nonatomic) unsigned long long fromSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowIfNeeded;
- (void)trackWithEvent:(id)a0 extraParams:(id)a1;
- (void)onReceivedLinkMultiBattleTeamChangedMessage:(id)a0;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)interactAnchorLinkersViewDidClickChangeGroup:(id)a0;
- (void)interactAnchorLinkersView:(id)a0 selectedLinkersChange:(id)a1;
- (id)playConfigName;
- (id)initWithDIContext:(id)a0 multiPkMode:(unsigned long long)a1 canSwitchPKMode:(BOOL)a2 battleConfig:(id)a3 battleConfigStr:(id)a4 fromSource:(unsigned long long)a5;
- (void)changeMode:(unsigned long long)a0;
- (void)openMultiBattle:(id)a0 completion:(id /* block */)a1;
- (void)requestChangeMultiPKModeTab:(unsigned long long)a0;
- (void)updateBattleStartButtonStatus;
- (void)changeTeamWithCompletion:(id /* block */)a0;
- (void)setupModeInfoIfNeeded:(id)a0;
- (void)setupTeamLinkers;
- (void)setupPersonalLinkers;
- (BOOL)isValidModeInfo:(id)a0;
- (BOOL)isSameBattleConfig:(id)a0;
- (void).cxx_destruct;
- (void)setupData;

@end
