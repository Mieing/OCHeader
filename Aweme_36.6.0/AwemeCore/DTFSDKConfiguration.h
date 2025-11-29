@class NSDictionary, NSString, NSArray;

@interface DTFSDKConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *originalData;
@property (copy, nonatomic) NSString *NEED_BACKUP_URL;
@property (copy, nonatomic) NSString *LOG_UPLOAD;
@property (copy, nonatomic) NSString *LOG_DEBUG_UPLOAD;
@property (copy, nonatomic) NSString *FORCE_MODEL_DOWNLOAD;
@property (copy, nonatomic) NSString *URLSESSION_DEGRADE;
@property (copy, nonatomic) NSString *MULTI_PICTURE_COLLECT;
@property (copy, nonatomic) NSString *EQUIPMENT_LIVENESS_THRESHOLD;
@property (copy, nonatomic) NSString *GEN_VIDEO_DEGRADE;
@property (copy, nonatomic) NSArray *MODEL_FILES;
@property (copy, nonatomic) NSString *PRESENT_VC_USE_COMPLETION;
@property (copy, nonatomic) NSString *BIO_USE_DELEGATE_REPLACE_KVO;
@property (copy, nonatomic) NSString *USE_BACKUP_DOMAIN_WHEN_TIMEOUT;
@property (copy, nonatomic) NSString *NEED_OBSERVER_CAPTURE_SESSION;
@property (copy, nonatomic) NSString *ROTATION_OLD_STYLE;
@property (nonatomic) BOOL urlSessionDegrade;

- (void)setConfigString:(id)a0;
- (void)parseConfigString:(id)a0;
- (void)processRemoteConfig;
- (void)loadProperties;
- (void)logError:(id)a0 param:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateConfig;
- (id)valueForKey:(id)a0;

@end
