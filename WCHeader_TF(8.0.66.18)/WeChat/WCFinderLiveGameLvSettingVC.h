@class GameRankSwitchInfo;

@interface WCFinderLiveGameLvSettingVC : WCFinderWCTableViewManagerVC

@property (retain, nonatomic) GameRankSwitchInfo *gameLiveSwitchInfo;

- (void)viewDidLoad;
- (void)onBuildTables;
- (void)onGameLiveRankSwitched:(id)a0 cellInfo:(id)a1;
- (void).cxx_destruct;

@end
