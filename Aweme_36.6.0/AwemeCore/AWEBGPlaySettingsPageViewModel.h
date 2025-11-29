@class AWEBackgroundPlaySettingsConfig, AWEBackgroundPlaySettingsSectionModel, NSString, NSMutableArray;
@protocol AWEBackgroundPlaySettingsTableViewDelegate;

@interface AWEBGPlaySettingsPageViewModel : NSObject <AWEBackgroundPlayAudioConfigDelegate>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *sectionList;
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
- (id)sectionModelWithSection:(long long)a0;
- (void)buildBGPlaySettingsSectionModel;
- (void)configViewModelWithType:(long long)a0;
- (void)configViewModelForAudio;
- (void)configViewModelForPiP;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)willDisplay;

@end
