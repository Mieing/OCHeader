@class NSString, EcNetworkConfig;

@interface EcCommonConfig : NSObject

@property (copy, nonatomic) NSString *biz_uid;
@property (copy, nonatomic) NSString *biz_sec_uid;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long ep_uid;
@property (nonatomic) long long sourceFrom;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *dataFolder;
@property (copy, nonatomic) NSString *downloadFolder;
@property (copy, nonatomic) NSString *cacheFolder;
@property (nonatomic) BOOL isBackgroundUploadDisable;
@property (retain, nonatomic) EcNetworkConfig *network;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)appendPathComponent:(id)a0;

@end
