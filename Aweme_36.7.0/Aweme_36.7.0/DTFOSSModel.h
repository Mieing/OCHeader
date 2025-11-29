@class NSDictionary, NSString, NSNumber;

@interface DTFOSSModel : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *accessKeySecret;
@property (copy, nonatomic) NSString *securityToken;
@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSString *bucket;
@property (copy, nonatomic) NSString *fileNamePrefix;
@property (retain, nonatomic) NSNumber *useBackup;
@property (copy, nonatomic) NSString *backupOssEndPoint;
@property (copy, nonatomic) NSString *backupBucketName;

+ (id)defaultModel;

- (id)initWithId:(id)a0 keySecret:(id)a1 token:(id)a2 endpoint:(id)a3 bucket:(id)a4 prefix:(id)a5 backupEndpoint:(id)a6 backupBucket:(id)a7;
- (id)getValueForkey:(id)a0;
- (BOOL)supportedBackup;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;

@end
