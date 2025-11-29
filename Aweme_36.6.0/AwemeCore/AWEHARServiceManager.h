@class HARService, NSString;

@interface AWEHARServiceManager : HTSService <AWEHARServiceManager>

@property (retain, nonatomic) HARService *harService;
@property (nonatomic) long long predictInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLastResultsDicOfRange:(long long)a0;
- (long long)getLastRangeMostIntStatus:(long long)a0;
- (id)getLastSensorValueWithDataType:(unsigned long long)a0 range:(long long)a1;
- (void)startPredicting;
- (void)stopPredicting;
- (BOOL)isPredicting;
- (id)getLastResult;
- (id)getLastStatus;
- (id)getLastResultsOfRange:(long long)a0;
- (long long)getLastIntStatusForType:(unsigned long long)a0;
- (long long)getLastIntStatus;
- (void)setupEngineWithEngineConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
