@class AWEGrouponSettingsControlInfo, AWEGrouponSettingsResponse, AWEGrouponC2HeaderToolEntranceResponse, NSDictionary, AWEGrouponResponsePageViewModel, AWEGrouponActivityBgModel, NSString, AWEGrouponMutipleTabModel, NSArray, AWEGrouponListDataResponse, AWEGrouponActivityModel, NSError, AWEGrouponResourceResponse;

@interface AWEGrouponResponse : NSObject

@property (retain, nonatomic) AWEGrouponResourceResponse *resourceResponse;
@property (retain, nonatomic) NSError *resourceError;
@property (nonatomic) unsigned long long from;
@property (retain, nonatomic) AWEGrouponResponsePageViewModel *pageViewModel;
@property (retain, nonatomic) AWEGrouponListDataResponse *listDataResponse;
@property (retain, nonatomic) AWEGrouponSettingsResponse *settingsResponse;
@property (copy, nonatomic) NSDictionary *tabsListResDict;
@property (copy, nonatomic) NSArray *transformerCardList;
@property (copy, nonatomic) NSArray *transformerAwemeList;
@property (retain, nonatomic) AWEGrouponMutipleTabModel *tabsModel;
@property (nonatomic) long long currentFeedTabID;
@property (nonatomic) BOOL needForceUpdateTabs;
@property (nonatomic) long long updateType;
@property (copy, nonatomic) NSDictionary *lifeTrackParams;
@property (copy, nonatomic) NSDictionary *dualSearchBarSetting;
@property (copy, nonatomic) NSString *diamondGlobalConfig;
@property (retain, nonatomic) AWEGrouponActivityBgModel *activityBg;
@property (retain, nonatomic) AWEGrouponActivityModel *activityModel;
@property (retain, nonatomic) AWEGrouponSettingsControlInfo *settingsControlInfo;
@property (retain, nonatomic) NSString *geckoConfigString;
@property (copy, nonatomic) NSString *serverLatency;
@property (retain, nonatomic) AWEGrouponC2HeaderToolEntranceResponse *headerToolEntranceResponse;
@property (retain, nonatomic) NSArray *geckoConfig;
@property (nonatomic) double ditoParseDuration;
@property (retain, nonatomic) NSArray *filteredDiff;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSArray *asyncUpdateModuleList;

- (void).cxx_destruct;

@end
