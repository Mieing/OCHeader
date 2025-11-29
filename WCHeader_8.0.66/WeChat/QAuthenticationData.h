@class QMapStyleData, QCustomLayerConfigData, QIndoorMapData, QDataLayerConfigData, QMapPromoteConfig, QL4Config;

@interface QAuthenticationData : NSObject

@property (readonly, nonatomic) QMapStyleData *mapStyleData;
@property (readonly, nonatomic) QIndoorMapData *indoorMapData;
@property (readonly, nonatomic) QCustomLayerConfigData *customLayerData;
@property (readonly, nonatomic) QDataLayerConfigData *dataLayerData;
@property (readonly, nonatomic) QMapPromoteConfig *promoteConfig;
@property (readonly, nonatomic) int pointEventCloudControl;
@property (readonly, nonatomic) QL4Config *l4Config;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
