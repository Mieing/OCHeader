@class NSString, NSArray;

@interface AWESystemAuthorizationViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasShownPasteboardSetting;

+ (void)showSystemSettingAlertWithType:(long long)a0 title:(id)a1 enterFrom:(id)a2;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)enableShowContactGuideEntry;
+ (id)settingParamsWithType:(long long)a0;

- (void)tapCellWithType:(long long)a0;
- (void)switchClipboard:(BOOL)a0;
- (void)switchAutoReadPasteBoard:(BOOL)a0;
- (void)tapManageSystemAddressBookCell;
- (void)tapManagePositionAuthorizationCell;
- (void)tapAlbumAuthDetailCell;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
