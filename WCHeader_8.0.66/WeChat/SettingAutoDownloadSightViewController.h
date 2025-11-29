@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingAutoDownloadSightViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
}

@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;
@property (nonatomic) unsigned long long settingViewType;
@property (readonly, nonatomic) long long from;

- (id)init;
- (id)initWithType:(unsigned long long)a0 from:(long long)a1;
- (id)initWithType:(unsigned long long)a0;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onReturn;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)savePhotoToLibraryChanged:(id)a0;
- (void)saveVideoToLibraryChanged:(id)a0;
- (void)saveVideoAutoPlayChanged:(id)a0;
- (void)saveIntelligentImgChanged:(id)a0;
- (void)saveCleanOriginMsgChanged:(id)a0;
- (void)silentDownloadChanged;
- (void)voipDoubleLinkSettingChanged:(id)a0;
- (void)reportOperate:(long long)a0;
- (void).cxx_destruct;

@end
