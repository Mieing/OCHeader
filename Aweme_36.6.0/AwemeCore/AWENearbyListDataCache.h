@class NSError, AWENearbyListDataResponse, AWENearbySettingsResponse;

@interface AWENearbyListDataCache : NSObject

@property (retain, nonatomic) AWENearbyListDataResponse *listDataResp;
@property (retain, nonatomic) AWENearbySettingsResponse *settingsResp;
@property (retain, nonatomic) NSError *listDataError;
@property (retain, nonatomic) NSError *settingsError;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL forcelyUpdateCityTitle;

- (void).cxx_destruct;

@end
