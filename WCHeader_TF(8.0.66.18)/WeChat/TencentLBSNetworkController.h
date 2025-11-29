@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface TencentLBSNetworkController : NSObject

@property (nonatomic) double postTimeInterval;
@property (nonatomic) double singleSysLocTimeOut;
@property (nonatomic) BOOL useHttp;
@property (nonatomic) double applistDayInterval;
@property (nonatomic) BOOL startBeacon;
@property (nonatomic) BOOL isUseSingleFix;
@property (nonatomic) BOOL startIndoorPdr;
@property (nonatomic) BOOL writeLog;
@property (nonatomic) BOOL uploadLog;
@property (retain, nonatomic) NSArray *beaconUUIDs;
@property (retain, nonatomic) NSMutableArray *rangedRegions;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *file;
@property (retain) NSMutableDictionary *controller;
@property (nonatomic) BOOL load;
@property (nonatomic) BOOL request;
@property double lastBleT;
@property (nonatomic) double beaconTimeInterval;
@property (nonatomic) double bleToGpsAcc;
@property (nonatomic) double bleToGpsSpeed;

+ (id)sharedInstance;
+ (id)encryptAes:(id)a0;
+ (id)decryptAes:(id)a0;
+ (id)aes_decrypt:(id)a0;
+ (id)aes_encrypt:(id)a0;
+ (id)encodeData:(id)a0;
+ (id)decodeData:(id)a0;

- (id)init;
- (void)loadCC;
- (BOOL)checkUUIDValid:(id)a0;
- (void)requestCC;
- (id)getControllerDictionary;
- (void)updateCC:(id)a0;
- (BOOL)isEnableBeaconLocRequest;
- (void)updateLastBleT;
- (void).cxx_destruct;

@end
