@class NSString, NSDictionary;

@interface BDByteCastDeviceInfo : NSObject

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *deviceBrand;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *castId;
@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long bdlinkCmdVersion;
@property (nonatomic) long long ping;
@property (nonatomic) BOOL isSupportPlayList;
@property (nonatomic) BOOL supportGetDeviceInfo;
@property (nonatomic) long long bitmap;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *encryptVersion;
@property (copy, nonatomic) NSString *preSharedKey;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
