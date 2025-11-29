@class DUXBottomNotification;

@interface AWESearchGeneralColumnUpgradeManager : NSObject

@property BOOL searchLayoutToastShown;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;

+ (id)sharedManager;

- (void)dismissSwitchLayoutToast;
- (void)resetSearchLayoutToastShown;
- (void)showSwitchLayoutToastWith:(long long)a0 enterMethod:(id)a1 searchID:(id)a2 searchKeyWord:(id)a3;
- (long long)getDoubleColumLayoutCount;
- (void)recordDoubleColumnLayoutCount;
- (BOOL)getSearchLayoutToastShown;
- (BOOL)hasHitFrequencyLimit;
- (id)getBottomNotificationIconImage;
- (id)getBottomNotificationTextContent;
- (void)clickWith:(long long)a0 enterMethod:(id)a1 searchID:(id)a2 searchKeyWord:(id)a3;
- (id)getBottomNotificationLinkText;
- (void)trackToastShowWithEnterMethod:(id)a0 columnButtonType:(long long)a1 searchID:(id)a2 searchKeyWord:(id)a3;
- (void)clearStorageDataWith:(unsigned long long)a0;
- (void)didShowSwitchToastRecord;
- (void)trackGeneralSettingBarClickWithSearchID:(id)a0 searchKeyWord:(id)a1;
- (void)trackToastClickWithEnterMethod:(id)a0 columnButtonType:(long long)a1 searchID:(id)a2 searchKeyWord:(id)a3;
- (id)clickTimeKeyWith:(unsigned long long)a0;
- (id)clickCountKeyWith:(unsigned long long)a0;
- (double)getSearchGeneralColumnUpgradeInterval:(unsigned long long)a0;
- (long long)getSearchGeneraColumnUpgradeMaxTimes:(unsigned long long)a0;
- (void)didClickSwitchButtonWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
