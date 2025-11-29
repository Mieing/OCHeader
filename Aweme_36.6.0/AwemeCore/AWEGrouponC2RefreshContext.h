@class AWEGrouponResponse, NSArray, AWEGrouponListDataResponse, AWEGrouponResourceResponse, AWEGrouponSettingsResponse, NSNumber;

@interface AWEGrouponC2RefreshContext : NSObject

@property (nonatomic) BOOL transformerFinish;
@property (nonatomic) BOOL feedFinish;
@property (nonatomic) BOOL mallResourceFinish;
@property (copy, nonatomic) NSNumber *transformerResult;
@property (copy, nonatomic) NSNumber *feedResult;
@property (copy, nonatomic) NSNumber *mallResourceResult;
@property (copy, nonatomic) NSArray *feedData;
@property (retain, nonatomic) AWEGrouponResourceResponse *resourceData;
@property (retain, nonatomic) AWEGrouponListDataResponse *listResponse;
@property (retain, nonatomic) AWEGrouponSettingsResponse *settingsResponse;
@property (retain, nonatomic) AWEGrouponResponse *grouponResponse;
@property (nonatomic) double initStartTime;
@property (nonatomic) unsigned long long transformerDataType;
@property (nonatomic) BOOL transformerHasHalfScreenData;
@property (nonatomic) unsigned long long transformerRefreshType;
@property (nonatomic) unsigned long long resourceRefreshType;

- (void).cxx_destruct;
- (id)init;

@end
