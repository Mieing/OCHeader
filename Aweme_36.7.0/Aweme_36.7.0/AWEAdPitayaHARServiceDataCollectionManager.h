@class NSNumber, NSString;

@interface AWEAdPitayaHARServiceDataCollectionManager : HTSService <AWEAdPitayaHARServiceDataCollectionProtocol>

@property (retain, nonatomic) NSNumber *battery;
@property (nonatomic) BOOL isCharging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initHARServiceDataCollectionManager;
- (BOOL)batteryStatus;
- (id)batteryParams;
- (void)startPredictingHARService;
- (id)getLastHARResult;
- (id)collectSensorDataFromHARService;
- (id)collectSensorDataFromHARServiceForSearch;
- (id)batteryLevel;
- (void).cxx_destruct;

@end
