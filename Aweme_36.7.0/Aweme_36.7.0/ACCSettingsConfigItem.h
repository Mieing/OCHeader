@class NSNumber, NSString, NSDictionary;

@interface ACCSettingsConfigItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *enablePreUpload;
@property (retain, nonatomic) NSNumber *preUploadEncryptionMode;
@property (retain, nonatomic) NSNumber *publishCloseClientWatermark;
@property (retain, nonatomic) NSNumber *dnsEnable;
@property (retain, nonatomic) NSNumber *dnsMainType;
@property (retain, nonatomic) NSNumber *dnsBackType;
@property (retain, nonatomic) NSNumber *dnsExpiredTime;
@property (retain, nonatomic) NSString *dnsOwnServer;
@property (retain, nonatomic) NSString *dnsGoogleServer;
@property (retain, nonatomic) NSNumber *livePreviewTime;
@property (retain, nonatomic) NSNumber *hasLive;
@property (retain, nonatomic) NSString *downgradeErrorToast;
@property (copy, nonatomic) NSDictionary *liveStickerInfo;
@property (retain, nonatomic) NSNumber *hdPublishStrategy2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
