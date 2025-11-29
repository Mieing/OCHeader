@class BDByteCastMulticastCheckResultModel, NSString, BDByteCastUnicastCheckResultModel, BDByteCastPortProbeResultModel, BDByteCastLocalNetworkPermissionCheckResultModel;

@interface BDByteCastEnvInfo : NSObject

@property (nonatomic) long long networkType;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic) NSString *wifiBSSID;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *netmask;
@property (copy, nonatomic) NSString *gateway;
@property (nonatomic) BOOL isVPNActive;
@property (nonatomic) BOOL isHotspotEnabled;
@property (nonatomic) BOOL supportMulticast;
@property (retain, nonatomic) BDByteCastLocalNetworkPermissionCheckResultModel *localNetworkPermissionCheckResultModel;
@property (retain, nonatomic) BDByteCastMulticastCheckResultModel *multicastCheckResultModel;
@property (retain, nonatomic) BDByteCastUnicastCheckResultModel *unicastCheckResultModel;
@property (retain, nonatomic) BDByteCastPortProbeResultModel *portProbeResultModel;

- (void).cxx_destruct;
- (id)description;

@end
