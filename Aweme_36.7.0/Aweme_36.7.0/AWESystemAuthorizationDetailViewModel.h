@class NSString, NSTimer, NSArray;

@interface AWESystemAuthorizationDetailViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double lastActionTime;
@property (nonatomic) BOOL isSwitchOn;
@property (retain, nonatomic) NSTimer *switchFireTimer;
@property (nonatomic) long long type;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (void)configSectionDataArray;
- (void)refactorConfigSectionDataArray;
- (void)handleNetworkFailedWithType:(long long)a0;
- (void)fireExifChangeAction;
- (void)updateItemStatusWithType:(long long)a0;
- (void)tapCellWithType:(long long)a0;
- (void)switchManagePositionExifPermit:(BOOL)a0;
- (void)switchManageIntelliAlbumSwitchOn:(BOOL)a0;
- (void)updateSystemShareSwitch:(BOOL)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)dealloc;

@end
