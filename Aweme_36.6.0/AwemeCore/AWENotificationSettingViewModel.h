@class NSString, AWESettingItemModel, AWENotificationSettingModel, NSArray;

@interface AWENotificationSettingViewModel : AWESettingBaseViewModel <AWEIMHalfScreenContainerVCDelegate, AWEPushSettingSubSheetViewControllerDelegate> {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWESettingItemModel *anchorPushSettingsItem;
@property (nonatomic) BOOL shouldShowAnchoPushItem;
@property (retain, nonatomic) AWESettingItemModel *pushItem;
@property (retain, nonatomic) AWENotificationSettingModel *settingModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSettingsWithFieldType:(id)a0 status:(BOOL)a1 requestPage:(id)a2 errorBlock:(id /* block */)a3 successBlock:(id /* block */)a4;
+ (BOOL)anchorPushSettingEnable;

- (void)reloadForAnchorPushItemUpdateIfNeeded;
- (void)didChangedReceivePushFromFriendsSwitch:(BOOL)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end
