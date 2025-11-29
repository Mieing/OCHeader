@class NSString;

@interface CKNetRequestConfigCenter : NSObject

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *effectVersion;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appLanguage;
@property (copy, nonatomic) NSString *cacheDir;
@property (readonly, copy, nonatomic) NSString *ckresourceVersion;

+ (id)sharedInstance;

- (id)commonParameters;
- (id)addHeadersFieldByURL:(id)a0;
- (id)addParamsByURL:(id)a0;
- (void).cxx_destruct;

@end
