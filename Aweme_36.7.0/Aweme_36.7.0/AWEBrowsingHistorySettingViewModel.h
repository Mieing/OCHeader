@class NSString, NSArray;

@interface AWEBrowsingHistorySettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (BOOL)shouldShowLiveVisitedHistory;

- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (void)initModel;
- (void)switchUserVisitedHistory:(BOOL)a0;
- (void)switchVideoMediaVisitedHistory:(BOOL)a0;
- (void)switchLiveVisitedHistory:(BOOL)a0;
- (void)updateFreqVisitedPeopleItem;
- (void)updateVideoMediaVisitedHistoryItem;
- (void)updateVideoLiveVisitedHistoryItem;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
