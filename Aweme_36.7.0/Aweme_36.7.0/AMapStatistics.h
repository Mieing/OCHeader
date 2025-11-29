@class NSString, NSArray, AMapFoundationKeychainManager, CTTelephonyNetworkInfo;

@interface AMapStatistics : NSObject {
    NSArray *_xinfoKeys;
    NSArray *_xinfoKeys21;
    NSArray *_platinfoKeys;
    double _lat;
    double _lon;
    NSString *_currentDeviceModel;
    NSString *_resolution;
}

@property (nonatomic) BOOL keyAuthorized;
@property (retain, nonatomic) AMapFoundationKeychainManager *keyChainManager;
@property (retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo;
@property (copy, nonatomic) NSString *mdiu;
@property (copy, nonatomic) NSString *amapIDFA;
@property (copy, nonatomic) NSString *diuLockToken;
@property (copy, nonatomic) NSString *xinfo21LockToken;
@property (copy, nonatomic) NSString *extLockToken;
@property (copy, nonatomic) NSString *xinfoLockToken;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSString *appname;
@property (readonly, nonatomic) NSString *appversion;
@property (readonly, nonatomic) NSString *bundleid;
@property (readonly, nonatomic) NSString *sysversion;
@property (readonly, nonatomic) NSString *diu;
@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) NSString *tid;
@property (readonly, nonatomic) NSString *sim;
@property (readonly, nonatomic) NSString *pkg;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *device;
@property (readonly, nonatomic) NSString *ant;
@property (readonly, nonatomic) NSString *nt;
@property (readonly, nonatomic) NSString *mnc;
@property (readonly, nonatomic) NSString *np;
@property (readonly, nonatomic) NSString *wifi;
@property (readonly, nonatomic) NSString *wifiname;
@property (readonly, nonatomic) NSString *manufacture;
@property (readonly, nonatomic) NSString *adiu;
@property (readonly, nonatomic) NSString *imac;

+ (id)tryToRestoreUTDIDValue;
+ (id)sharedStatistics;

- (id)tel;
- (id)arch;
- (id)currentDeviceModel;
- (id)platinfoWithProduct:(id)a0 version:(id)a1;
- (id)lctArgsWithProduct:(id)a0 version:(id)a1;
- (id)xinfo_21;
- (id)xinfo;
- (id)infoDictionaryWithKeys:(id)a0;
- (void)initProperty;
- (id)infoStringWithKeys:(id)a0;
- (id)ram;
- (id)fetchSSIDInfo;
- (void)setupCoordinateWithLat:(double)a0 lon:(double)a1;
- (id)wifis;
- (id)bts;
- (id)bttype;
- (id)glrender;
- (id)lat;
- (void).cxx_destruct;
- (id)resolution;
- (id)storage;
- (id)init;
- (id)gps;
- (id)lon;
- (id)ext;

@end
