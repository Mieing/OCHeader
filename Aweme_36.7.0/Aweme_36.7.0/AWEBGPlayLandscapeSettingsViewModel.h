@class AWELandscapePageContext, AWEAwemeModel, AWEBGPlayLandscapeSettingsCellModel, NSMutableArray;
@protocol AWEBGPlayLandscapeTableViewDelegate;

@interface AWEBGPlayLandscapeSettingsViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (nonatomic) long long panelStyle;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsCellModel *settingsCellModel;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsCellModel *audioAllSceneCellModel;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsCellModel *audioPinchSceneCellModel;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsCellModel *pipAllSceneCellModel;
@property (retain, nonatomic) AWEBGPlayLandscapeSettingsCellModel *pipPinchSceneCellModel;
@property (nonatomic) BOOL isSupportedPinchSwitch;
@property (weak, nonatomic) id<AWEBGPlayLandscapeTableViewDelegate> delegate;

+ (BOOL)shouldShowBGPlayAudioSwitchWithModel:(id)a0;
+ (BOOL)shouldShowPIPSwitchWitModel:(id)a0;

- (id)cellModelWithIndexPath:(id)a0;
- (void)trackBackgroundPlayAudioShow;
- (void)trackChangeBackgroundPlayAudioSwitch:(BOOL)a0 bgPlaySettings:(id)a1;
- (void)insertCellModel:(id)a0 section:(long long)a1;
- (void)removeCellModel:(id)a0 section:(long long)a1;
- (void)trackPiPSwitchClickToStatus:(BOOL)a0;
- (void)panelWillDisplay;
- (void)configWithModel:(id)a0 pageContext:(id)a1 panelStyle:(long long)a2;
- (void)configViewModelForAudioPinchSwitch;
- (void)configViewModelForPiPPinchSwitch;
- (id)backgroundAudioCellModel;
- (id)backgroundSettingsCellModel;
- (id)pipCellModel;
- (void)onBGPlaySwitchChanged:(BOOL)a0;
- (void)trackPIPSwitchShow;
- (void)onPIPSwitchChanged:(BOOL)a0;
- (id)configBGPlayAudioSwitchCellModel;
- (id)configBGPlayAudioAllSceneCellModel;
- (id)configBGPlayAudioPinchSceneCellModel;
- (id)configBGPlayPiPSwitchCellModel;
- (id)configBGPlayPiPAllSceneCellModel;
- (id)configBGPlayPiPPinchSceneCellModel;
- (id)commonParamsForTracker;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
