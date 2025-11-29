@class AWEBackgroundPlaySettingsConfig, NSDictionary, AWEAwemeModel, AWEBackgroundPlaySettingsSectionModel, NSMutableArray, NSString;
@protocol AWEBackgroundPlaySettingsTableViewDelegate;

@interface AWEBackgroundPlaySettingsViewModel : NSObject <AWEBackgroundPlayAudioConfigDelegate>

@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long panelStyle;
@property (copy, nonatomic) NSDictionary *logExtraParams;
@property (retain, nonatomic) NSMutableArray *configList;
@property (retain, nonatomic) AWEBackgroundPlaySettingsConfig *settingsConfig;
@property (retain, nonatomic) AWEBackgroundPlaySettingsSectionModel *settingsSectionModel;
@property (weak, nonatomic) id<AWEBackgroundPlaySettingsTableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModelWithIndexPath:(id)a0;
- (id)cellModelList;
- (void)insertCellModels:(id)a0 section:(long long)a1;
- (void)removeCellModels:(id)a0 section:(long long)a1;
- (void)insertCellModel:(id)a0 section:(long long)a1;
- (void)removeCellModel:(id)a0 section:(long long)a1;
- (void)configWithModel:(id)a0 panelStyle:(long long)a1 logExtraParams:(id)a2;
- (void)panelWillDisplay;
- (id)sectionModelWithSection:(long long)a0;
- (void)configViewModelForAudioStyle;
- (void)configViewModelForPiPStyle;
- (void)configViewModelForUniPinchStyle;
- (void)updateCellModelForBigFontIfNeed;
- (void)buildBGPlaySettingsSectionModel;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
