@class NSDictionary, AWENearbyActivityBgModel, AWENearbyGrouponPageViewModel, AWENearbyActivityModel, AWENearbySettingsResponse, NSString, AWENearbyGrouponMutipleTabModel, AWENearbySettingsControlInfo, NSArray, AWENearbyGrouponListDataResponse, AWENearbyC2HeaderToolEntranceResponse, NSError, AWENearbyResourceResponse;

@interface AWENearbyGrouponResponse : NSObject

@property (retain, nonatomic) AWENearbyResourceResponse *resourceResponse;
@property (retain, nonatomic) NSError *resourceError;
@property (nonatomic) unsigned long long from;
@property (retain, nonatomic) AWENearbyGrouponPageViewModel *pageViewModel;
@property (retain, nonatomic) AWENearbyGrouponListDataResponse *listDataResponse;
@property (retain, nonatomic) AWENearbySettingsResponse *settingsResponse;
@property (copy, nonatomic) NSDictionary *tabsListResDict;
@property (copy, nonatomic) NSArray *transformerCardList;
@property (copy, nonatomic) NSArray *transformerAwemeList;
@property (retain, nonatomic) AWENearbyGrouponMutipleTabModel *tabsModel;
@property (nonatomic) long long currentFeedTabID;
@property (nonatomic) BOOL needForceUpdateTabs;
@property (nonatomic) long long updateType;
@property (copy, nonatomic) NSDictionary *lifeTrackParams;
@property (copy, nonatomic) NSDictionary *dualSearchBarSetting;
@property (copy, nonatomic) NSString *diamondGlobalConfig;
@property (retain, nonatomic) AWENearbyActivityBgModel *activityBg;
@property (retain, nonatomic) AWENearbyActivityModel *activityModel;
@property (retain, nonatomic) AWENearbySettingsControlInfo *settingsControlInfo;
@property (retain, nonatomic) NSString *geckoConfigString;
@property (copy, nonatomic) NSString *serverLatency;
@property (retain, nonatomic) AWENearbyC2HeaderToolEntranceResponse *headerToolEntranceResponse;
@property (retain, nonatomic) NSArray *geckoConfig;
@property (nonatomic) double ditoParseDuration;
@property (retain, nonatomic) NSArray *filteredDiff;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSArray *asyncUpdateModuleList;

- (void).cxx_destruct;

@end
