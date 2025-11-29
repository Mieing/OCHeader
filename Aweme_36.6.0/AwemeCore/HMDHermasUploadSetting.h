@class NSString;

@interface HMDHermasUploadSetting : HMDCommonAPISetting

@property (nonatomic) BOOL enableRefactorOpen;
@property (nonatomic) BOOL enableRawUpload;
@property (nonatomic) unsigned long long limitUploadInterval;
@property (nonatomic) long long limitUploadSize;
@property (nonatomic) long long maxLogNumber;
@property (nonatomic) double maxFileSize;
@property (nonatomic) long long maxUploadSize;
@property (nonatomic) long long uploadInterval;
@property (nonatomic) long long recordThreadShareMask;
@property (nonatomic) BOOL devastateDB;
@property (retain, nonatomic) NSString *localConfig;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
