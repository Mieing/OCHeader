@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPrivacySettingFindMyWayViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateSerialQueue;
@property (retain, nonatomic) NSString *enterFrom;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)shouldShowSearchedByStranger;
+ (void)syncSearchByMobileStatusIfNeed;

- (id)setupSectionArray;
- (void)updateSectionDataArray;
- (void)fetchUserSettingsWithCompletion:(id /* block */)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (void)viewDidLoad;

@end
