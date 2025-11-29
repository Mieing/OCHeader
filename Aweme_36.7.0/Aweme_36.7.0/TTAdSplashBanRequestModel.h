@class NSMutableData, NSData, NSString;

@interface TTAdSplashBanRequestModel : NSObject

@property (retain, nonatomic) NSMutableData *reqDataWithoutMAC;
@property (retain, nonatomic) NSData *macData;
@property (nonatomic) unsigned int transactaionID;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned char type;
@property (nonatomic) unsigned char flag;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *timeStamp;
@property (nonatomic) unsigned long long randomNum;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int systemVersion;
@property (retain, nonatomic) NSString *MAC;
@property (nonatomic) BOOL formHotLaunch;
@property (nonatomic) double costTime;
@property (copy, nonatomic) NSString *requestAddr;
@property (nonatomic) double startRequestTime;
@property (nonatomic) unsigned long long rank;

+ (id)templateRequestModel;
+ (unsigned int)getVersionFrom:(id)a0;

- (void)generateReqDataWithoutMAC;
- (void)generateMacData;
- (void).cxx_destruct;
- (id)requestData;

@end
