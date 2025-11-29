@class QMapPromoteConfig, QMapView, NSOperationQueue;

@interface QBrandPromotionContext : NSObject

@property (retain, nonatomic) QMapPromoteConfig *promoteConfig;
@property (readonly, weak, nonatomic) QMapView *mapView;
@property (readonly, nonatomic) NSOperationQueue *queue;

- (id)initWithMapView:(id)a0;
- (void)setup;
- (id)configPath;
- (id)loadConfigFromLocalCache;
- (void)writeConfigToLocalCache:(id)a0;
- (void).cxx_destruct;

@end
