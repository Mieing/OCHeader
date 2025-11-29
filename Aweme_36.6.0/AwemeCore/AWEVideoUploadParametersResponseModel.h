@class NSString, NSDictionary, NSNumber, AWEVideoUploadSpeedModel;

@interface AWEVideoUploadParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *captionAppKey;
@property (retain, nonatomic) NSString *fileHostName;
@property (retain, nonatomic) NSString *videoHostName;
@property (retain, nonatomic) NSString *authorization;
@property (retain, nonatomic) NSDictionary *authorization2;
@property (retain, nonatomic) NSString *captionAuthorization;
@property (retain, nonatomic) NSDictionary *captionAuthorization2;
@property (retain, nonatomic) NSNumber *sliceTimeout;
@property (retain, nonatomic) NSNumber *sliceRetryCount;
@property (retain, nonatomic) NSNumber *fileRetryCount;
@property (retain, nonatomic) NSNumber *sliceSize;
@property (retain, nonatomic) NSNumber *coverTime;
@property (retain, nonatomic) NSNumber *maxFailTime;
@property (retain, nonatomic) NSNumber *maxFailTimeEnabled;
@property (retain, nonatomic) NSNumber *socketNumber;
@property (retain, nonatomic) NSNumber *enableHttps;
@property (retain, nonatomic) NSNumber *fileTryHttpsEnable;
@property (retain, nonatomic) NSNumber *aliveMaxFailTime;
@property (retain, nonatomic) NSNumber *enablePostMethod;
@property (retain, nonatomic) NSNumber *openTimeOut;
@property (retain, nonatomic) NSNumber *enableTTNet;
@property (retain, nonatomic) NSNumber *ttnetConfigValue;
@property (retain, nonatomic) NSNumber *enableQuic;
@property (retain, nonatomic) NSNumber *isStreamUploadEnable;
@property (retain, nonatomic) NSNumber *mainNetworkType;
@property (retain, nonatomic) NSNumber *backupNetworkType;
@property (retain, nonatomic) NSString *userStoreRegion;
@property (retain, nonatomic) AWEVideoUploadSpeedModel *speedModel;
@property (copy, nonatomic) NSString *redPacketAppKey;
@property (retain, nonatomic) NSString *redPacketAuthorization;
@property (retain, nonatomic) NSDictionary *redPacketAuthorization2;
@property (copy, nonatomic) NSString *aiCreationAppKey;
@property (copy, nonatomic) NSString *aiCreationAuthorization;
@property (retain, nonatomic) NSDictionary *aiCreationAuthorization2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)speedModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
