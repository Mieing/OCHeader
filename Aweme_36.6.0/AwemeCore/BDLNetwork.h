@class NSString;

@interface BDLNetwork : NSObject

@property (class, nonatomic) BOOL isDebug;
@property (class, copy, nonatomic) NSString *wifiMacAddress;
@property (class, copy, nonatomic) NSString *wifiName;

+ (void)_requestWithPath:(id)a0 params:(id)a1 method:(id)a2 headerField:(id)a3 tagType:(unsigned long long)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 success:(id /* block */)a7 failure:(id /* block */)a8;
+ (id)requestURLStringWithPath:(id)a0;
+ (void)logReportLocationInfoDidFailureWithDictionary:(id)a0;
+ (void)logReportLocationInfoDidSuccessWithDictionary:(id)a0;
+ (void)differentiateFromPath:(id)a0 objDict:(id)a1 successCompletion:(id /* block */)a2;
+ (void)logReportLocationDefinationErrWithString:(id)a0;
+ (void)GETWithPath:(id)a0 params:(id)a1 headerField:(id)a2 tagType:(unsigned long long)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
+ (void)POSTWithPath:(id)a0 params:(id)a1 headerField:(id)a2 contentType:(long long)a3 tagType:(unsigned long long)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
+ (void)DAQ_submitBeaconNowWithBeacons:(id)a0 locateId:(id)a1 logID:(id)a2;
+ (id)_DAQ_basicInfoWithMode:(BOOL)a0;
+ (void)submitV2WithParams:(id)a0 cert:(id)a1 locationInfo:(id)a2 dataLevel:(long long)a3 tagType:(unsigned long long)a4 contentType:(long long)a5 isScanBeacon:(BOOL)a6 submitInterval:(double)a7 completion:(id /* block */)a8;
+ (void)_fetchWifiInfoWithCert:(id)a0 completion:(id /* block */)a1;
+ (id)daqConfig:(id)a0;
+ (long long)getReportBasicInfoStatusWithStatusInfo:(id)a0;
+ (id)_getRegionParamsForRequest;
+ (void)updateLastReportBasicInfoWithStatusInfo:(id)a0;
+ (void)DAQ_reportRestrictedInfoWithCompletion:(id /* block */)a0;
+ (void)_geocode_useGisToReverseLocation:(id)a0 language:(id)a1 worldView:(id)a2 dataLevel:(long long)a3 completion:(id /* block */)a4;
+ (void)geocode_useGeocodeToReverseLocation:(id)a0 networkTag:(unsigned long long)a1 dataLevel:(long long)a2 completion:(id /* block */)a3;
+ (void)geocode_useGisToReverseLocation:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
+ (void)geocode_useGisToReverseLocation:(id)a0 language:(id)a1 worldView:(id)a2 dataLevel:(long long)a3 completion:(id /* block */)a4;
+ (void)geocode_requestIPLocationWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)geocode_useGeocodeToReverseLocation:(id)a0 networkTag:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)DAQ_rlReportLocationInfo:(id)a0 uploadSource:(id)a1 dataLevel:(long long)a2 tagType:(unsigned long long)a3 option:(id)a4 cert:(id)a5;
+ (void)DAQ_reportBasicInfoWithCompletion:(id /* block */)a0;
+ (void)DAQ_reportBasicInfoAtScene:(id)a0 withCompletion:(id /* block */)a1;
+ (void)DAQ_reportLocationInfo:(id)a0 placemark:(id)a1 uploadSource:(id)a2 intelUploadInterval:(double)a3 dataLevel:(long long)a4 tagType:(unsigned long long)a5 isScanBeacon:(BOOL)a6 option:(id)a7 cert:(id)a8 completion:(id /* block */)a9;
+ (double)lastUploadTimeStamp;
+ (void)_scan_refreshLocationInBiz:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
+ (void)_scan_uploadLocationInBiz:(id)a0 extraInfo:(id)a1 locationInfo:(id)a2 cert:(id)a3 completion:(id /* block */)a4;
+ (void)_scan_refreshUploadToServerParams:(id)a0 locInfo:(id)a1 completion:(id /* block */)a2;
+ (void)_scan_uploadLocationToServerWithParams:(id)a0 locInfo:(id)a1 completion:(id /* block */)a2;
+ (void)setLastUploadTimeStamp:(double)a0;
+ (void)scan_uploadLocationInBiz:(id)a0 extraInfo:(id)a1 locationInfo:(id)a2 cert:(id)a3 completion:(id /* block */)a4;
+ (id)tracerouteConfigWithDict:(id)a0;
+ (id)jsonFromInfo:(id)a0;
+ (void)trace_fetchConfigWithCompletion:(id /* block */)a0;
+ (void)trace_uploadTracerouteResult:(id)a0 completion:(id /* block */)a1;
+ (id)timestamp;

@end
