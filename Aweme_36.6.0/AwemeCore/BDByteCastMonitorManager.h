@class HMDTTMonitor, NSString, BDByteCastSinkDeviceInfo;
@protocol BDByteCastMonitorDelegate;

@interface BDByteCastMonitorManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *browseId;
@property (copy, nonatomic) NSString *connectionId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *projectId;
@property (copy, nonatomic) NSString *licenseAppId;
@property (copy, nonatomic) NSString *licenseId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *orderedProtocolsString;
@property (nonatomic) BOOL bleBrowse;
@property (readonly, copy, nonatomic) NSString *monitorDid;
@property (nonatomic) BOOL bdlinkEnableQuickQuery;
@property (copy, nonatomic) NSString *castUrl;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *networkType;
@property (nonatomic) BOOL netVPNStatus;
@property (nonatomic) BOOL netProxyStatus;
@property (nonatomic) BOOL netHotspotStatus;
@property (retain, nonatomic) BDByteCastSinkDeviceInfo *sinkDeviceInfo;
@property (weak, nonatomic) id<BDByteCastMonitorDelegate> monitorDelegate;
@property (nonatomic) BOOL isPreSearch;

- (void)event:(id)a0 params:(id)a1;
- (id)initWithContextId:(id)a0;
- (void)trackServiceWithServiceName:(id)a0 andSdkType:(unsigned long long)a1 andCategory:(id)a2 andExtra:(id)a3 andWillRecordConnectionId:(BOOL)a4;
- (void)trackServiceWithServiceName:(id)a0 andSdkType:(unsigned long long)a1 andCategory:(id)a2 andExtra:(id)a3 andWillRecordConnectionId:(BOOL)a4 andIsV2:(BOOL)a5;
- (void)event:(id)a0 sdkType:(unsigned long long)a1 params:(id)a2;
- (void)updateNetStatus;
- (void)trackServiceWithServiceName:(id)a0 andCategory:(id)a1 andExtra:(id)a2;
- (void)initHMDTTMonitor;
- (void)trackServiceWithServiceName:(id)a0 andSdkType:(unsigned long long)a1 andCategory:(id)a2 andMetric:(id)a3 andExtra:(id)a4 andWillRecordConnectionId:(BOOL)a5 andIsV2:(BOOL)a6;
- (id)commonParamsWithSdkType:(unsigned long long)a0;
- (id)typeStringForSdkType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
