@class UIView, NSString, AWEDanmakuSettingsViewControllerDataSource, UIButton, AWEDanmakuSettingsViewOptionCell, NSMutableArray, UITableView, AWEDanmakuSettingsPanelConfig, UILabel, NSDictionary;
@protocol AWEDanmakuSettingsPanelDelegate;

@interface AWEDanmakuSettingsView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWEDanmakuSettingsPanelViewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIView *topLine;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEDanmakuSettingsViewControllerDataSource *dataSource;
@property (copy, nonatomic) NSString *danmakuCount;
@property (retain, nonatomic) AWEDanmakuSettingsViewOptionCell *danmakuListCell;
@property (nonatomic) BOOL showUnSupportMaskDesc;
@property (nonatomic) BOOL shouldShowDanmakuManager;
@property (retain, nonatomic) NSMutableArray *groupModels;
@property (retain, nonatomic) AWEDanmakuSettingsPanelConfig *settingConfig;
@property (weak, nonatomic) id<AWEDanmakuSettingsPanelDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateDanmakuCount:(id)a0;
- (void)enterDanmakuListPanel;
- (void)changeSmartModeSwitch;
- (void)showSmartModeRulePanel;
- (void)closeAllDanmaku;
- (void)configWithDanmakuScene:(unsigned long long)a0;
- (void)loadPanelData;
- (void)setupUIWithDanmakuScene:(unsigned long long)a0;
- (void)enterDanmakuManagerPanel;
- (void)enterDanmakuShieldWord;
- (void)trackResetDanmakuSettings;
- (void)resetDanmakuSettings;
- (void)updateDanmakuViewWithSupportMask:(BOOL)a0;
- (void)highlightCloseDanmakuCell;
- (id)initWithDanmakuScene:(unsigned long long)a0 shouldShowDanmakuMaskSwitch:(BOOL)a1 showUnSupportMaskDesc:(BOOL)a2 shouldShowDanmakuManager:(BOOL)a3 config:(id)a4;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;

@end
