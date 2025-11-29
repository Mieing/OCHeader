@class NSString;

@interface NLEImageDownloaderParams_OC : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *effectSdkVersion;
@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *appLanguage;
@property (retain, nonatomic) NSString *effectCacheDir;
@property (retain, nonatomic) NSString *effectHost;
@property (retain, nonatomic) NSString *modelCacheDir;
@property (retain, nonatomic) NSString *artistCacheDir;
@property (retain, nonatomic) NSString *artistHost;
@property (retain, nonatomic) NSString *imuseCacheDir;
@property (retain, nonatomic) NSString *imuseHost;
@property (retain, nonatomic) NSString *resolution;
@property (nonatomic) BOOL autoUnzip;

- (void).cxx_destruct;
- (id)init;

@end
