@class UITableViewCell, UIView, NSString, AWEDanmakuSettingsViewControllerDataSource, UIButton, UITableView, NSMutableArray, NSDictionary, AWEDanmakuSettingsPanelConfig, UILabel;
@protocol AWEDanmakuSettingsPanelDelegate, AWEDanmakuSettingsViewOptionCellProtocol;

@interface AWEDanmakuSettingsPanelView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWEDanmakuSettingsPanelViewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *resetButton;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UITableViewCell<AWEDanmakuSettingsViewOptionCellProtocol> *danmakuListCell;
@property (retain, nonatomic) AWEDanmakuSettingsPanelConfig *settingConfig;
@property (retain, nonatomic) AWEDanmakuSettingsViewControllerDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *dataSourceArray;
@property (copy, nonatomic) NSString *danmakuCount;
@property (weak, nonatomic) id<AWEDanmakuSettingsPanelDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)updateDanmakuCount:(id)a0;
- (void)enterDanmakuListPanel;
- (void)changeSmartModeSwitch;
- (void)showSmartModeRulePanel;
- (void)borderForView:(id)a0;
- (void)setSectionCornerRadiusAndLines:(id)a0 forRowAtIndexPath:(id)a1;
- (void)loadPanelData;
- (void)setupUIWithDanmakuScene:(unsigned long long)a0;
- (void)settingVerticalStylesInfoDefaultIfNeed;
- (void)danmakuSwitchChanged:(BOOL)a0 enterFrom:(long long)a1;
- (void)enterDanmakuManagerPanel;
- (void)enterDanmakuShieldWord;
- (void)trackResetDanmakuSettings;
- (id)creatSeperactorView;
- (void)resetDanmakuSettings;
- (void)highlightCellIfNeed;
- (id)initWithDanmakuScene:(unsigned long long)a0 config:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)isDarkMode;

@end
