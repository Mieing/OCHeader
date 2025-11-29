@class NSString, NSDictionary;

@interface QBBeaconAnaModel : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *qua;
@property (retain, nonatomic) NSString *guid;
@property (retain) NSString *gatewayIP;
@property (retain, nonatomic) NSString *osVer;
@property (nonatomic) float osVerFloat;
@property (retain) NSString *qimei;
@property (retain, nonatomic) NSString *hardwareModel;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *language;
@property (retain) NSString *udidVendor;
@property (retain) NSString *advUid;
@property (nonatomic) BOOL isReet;
@property (retain, nonatomic) NSString *channel_id;
@property (retain, nonatomic) NSString *sessionid;
@property (retain, nonatomic) NSDictionary *addParams;
@property (retain) NSString *wifiName;
@property (retain) NSString *imsi;
@property (retain) NSString *wifiMac;
@property (retain) NSString *networkType;
@property (retain) NSString *apn;

+ (id)getDefualtQBBeaconAnaModel;

- (id)init;
- (void).cxx_destruct;

@end
