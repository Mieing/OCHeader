@class NSString, TencentLBSLocationManager;

@interface WAJSEventHandler_getFuzzyLocation : WAJSEventHandler_BaseEvent {
    unsigned long long m_geoLocationType;
    NSString *_openId;
}

@property (retain, nonatomic) TencentLBSLocationManager *locationMgr;

- (void)handleJSEvent:(id)a0;
- (void)startRequestAddress;
- (void)requestAddressSync;
- (void)onDelayDismiss;
- (void)updateWebviewTitle;
- (void)onTencentLBSLocationGot:(id)a0;
- (void)onTencentLBSLocationError:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })randomDeviate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
