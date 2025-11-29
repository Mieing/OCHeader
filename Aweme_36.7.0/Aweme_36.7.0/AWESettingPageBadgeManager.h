@class MMKV, NSMutableDictionary, NSMutableSet, NSPointerArray;
@protocol AWESettingPageBadgeManagerDelegate;

@interface AWESettingPageBadgeManager : NSObject

@property (retain, nonatomic) MMKV *mmKvStorage;
@property (retain, nonatomic) NSMutableDictionary *bizShowBadgeRecordMap;
@property (retain, nonatomic) NSMutableSet *dotBadgeBusinessIDSet;
@property (retain, nonatomic) NSMutableSet *exposedDotBadgeBusinessIDSet;
@property (copy, nonatomic) NSPointerArray *badgeControlDelegateArray;
@property (weak, nonatomic) id<AWESettingPageBadgeManagerDelegate> delegate;

- (void)didOpenSideBar;
- (void)didCloseSideBar;
- (void)registerBadgeControlDelegate:(id)a0;
- (void)didClickSettingPage;
- (void)didCreateSettingPage;
- (void)showDotBadgeWithController:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_loadStorage;
- (void)p_consumeBadgeWithBusinessIDSet:(id)a0;
- (void)p_hideDotBadgeWithBusinessID:(id)a0 reason:(long long)a1;
- (void)p_exposeBadgeWithBusinessIDSet:(id)a0;
- (BOOL)p_isFrequencySatisfiedWithBusinessID:(id)a0;
- (void)p_showDotBadgeWithBusinessIDSet:(id)a0;
- (void)p_showDotBadgeWithBusinessID:(id)a0 completionBlock:(id /* block */)a1;
- (long long)p_continuousShowBadgeTimes;
- (double)p_exitTimeInterval;
- (void)p_saveBizShowBadgeRecordMap;
- (id)p_settingPageBadgeFrequencyConfig;
- (void).cxx_destruct;
- (id)init;

@end
