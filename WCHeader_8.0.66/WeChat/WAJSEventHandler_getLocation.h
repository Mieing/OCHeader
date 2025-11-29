@class NSString, TencentLBSLocationManager;

@interface WAJSEventHandler_getLocation : WAJSEventHandler_BaseEvent {
    unsigned long long m_geoLocationType;
    NSString *_subKey;
    NSString *_openId;
    BOOL _enableIndoor;
    double _highAccuracyTimeout;
    double _beginTime;
}

@property (nonatomic) double getLocationTimeStamp;
@property (retain, nonatomic) TencentLBSLocationManager *locationMgr;

- (void)handleJSEvent:(id)a0;
- (void)startRequestAddress;
- (void)requestAddressSync;
- (void)onDelayDismiss;
- (void)updateWebviewTitle;
- (void)onTencentLBSLocationChanged:(id)a0;
- (void)reportID;
- (void)onTencentLBSLocationError:(id)a0;
- (void).cxx_destruct;

@end
