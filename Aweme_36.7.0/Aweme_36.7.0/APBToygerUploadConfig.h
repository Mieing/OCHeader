@class NSString, NSDictionary, NSArray, NSNumber;

@interface APBToygerUploadConfig : APBToygerBaseConfig

@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSNumber *desiredWidth;
@property (retain, nonatomic) NSNumber *minquality;
@property (retain, nonatomic) NSNumber *upload_compress_rate;
@property (retain, nonatomic) NSNumber *log_classifier;
@property (retain, nonatomic) NSNumber *enableSmoothTransition;
@property (retain, nonatomic) NSNumber *photinusType;
@property (nonatomic) BOOL photinusVideo;
@property (retain, nonatomic) NSNumber *chameleonFrameEnable;
@property (retain, nonatomic) NSNumber *chameleonUploadCompressRate;
@property (copy, nonatomic) NSString *chameleonFileNamePrefix;
@property (copy, nonatomic) NSString *bucket;
@property (copy, nonatomic) NSString *securityToken;
@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *accessKeySecret;
@property (copy, nonatomic) NSString *fileNamePrefix;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *collectFileNamePrefix;
@property (retain, nonatomic) NSArray *collection;
@property (retain, nonatomic) NSArray *captureConfig;
@property (retain, nonatomic) NSDictionary *captureConfigItem;
@property (retain, nonatomic) NSDictionary *blobConfig;

- (void)parseProperty;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
