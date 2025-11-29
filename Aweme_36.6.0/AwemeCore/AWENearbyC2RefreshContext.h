@class AWENearbyGrouponResponse, NSArray, AWENearbyGrouponListDataResponse, AWENearbySettingsResponse, NSNumber, AWENearbyResourceResponse;

@interface AWENearbyC2RefreshContext : NSObject

@property (nonatomic) BOOL transformerFinish;
@property (nonatomic) BOOL feedFinish;
@property (nonatomic) BOOL mallResourceFinish;
@property (copy, nonatomic) NSNumber *transformerResult;
@property (copy, nonatomic) NSNumber *feedResult;
@property (copy, nonatomic) NSNumber *mallResourceResult;
@property (copy, nonatomic) NSArray *feedData;
@property (retain, nonatomic) AWENearbyResourceResponse *resourceData;
@property (retain, nonatomic) AWENearbyGrouponListDataResponse *listResponse;
@property (retain, nonatomic) AWENearbySettingsResponse *settingsResponse;
@property (retain, nonatomic) AWENearbyGrouponResponse *grouponResponse;
@property (nonatomic) double initStartTime;
@property (nonatomic) unsigned long long transformerDataType;
@property (nonatomic) BOOL transformerHasHalfScreenData;
@property (nonatomic) unsigned long long transformerRefreshType;
@property (nonatomic) unsigned long long resourceRefreshType;

- (void).cxx_destruct;
- (id)init;

@end
