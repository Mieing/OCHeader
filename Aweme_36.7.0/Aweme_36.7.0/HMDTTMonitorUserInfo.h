@class NSString, NSDictionary, NSArray;

@interface HMDTTMonitorUserInfo : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *hostAppID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) id /* block */ transformBlock;
@property (copy) id /* block */ commonParamsBlock;
@property (copy) NSDictionary *commonParams;
@property (copy, nonatomic) NSArray *configHostArray;
@property (copy, nonatomic) NSString *performanceUploadHost;
@property (nonatomic) unsigned long long flushCount;
@property (nonatomic) BOOL enableBackgroundUpload;
@property (copy, nonatomic) NSDictionary *customHeader;
@property (copy, nonatomic) NSString *scopedDeviceID;
@property (copy, nonatomic) NSString *scopedUserID;

- (id)initWithAppID:(id)a0;
- (id)currentCommonParams;
- (void).cxx_destruct;

@end
