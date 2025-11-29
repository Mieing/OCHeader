@class NSString, NSArray, NSDictionary, AWECFWalrus;

@interface AWECFExtricable : NSObject <BDQuaterbackConfigProtocol>

@property (copy, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) AWECFWalrus *downloadingStatus;
@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appBuildVersion;
@property (nonatomic) long long status;
@property (nonatomic) BOOL wifionly;
@property (nonatomic) BOOL offline;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *backupUrls;
@property (nonatomic) long long operationType;
@property (nonatomic, getter=isEncrypted) BOOL encrypted;
@property (copy, nonatomic) NSString *privateKey;
@property (nonatomic, getter=isAsync) BOOL async;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *appVersionList;
@property (copy, nonatomic) NSDictionary *osVersionRange;
@property (copy, nonatomic) NSString *loadEnable;
@property (nonatomic) int hookType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithArray:(id)a0;
+ (id)modelsWithDictionary:(id)a0;
+ (id)modelWithDictionary:(id)a0;

- (id)toPropertyListDictionary;
- (id)toReportDicitonary;
- (id)toLogDicitonary;
- (BOOL)bd_viewDidLayoutSubviews:(id)a0;
- (id)uniquekey;
- (BOOL)bd_didReceiveMemoryWarning;
- (id)lastDownloadError;
- (id)nextDownloadUrl;
- (void)bd_presentViewController:(id)a0;
- (void)bd_dismissViewControllerAnimated:(id)a0 bd_presentModalViewController:(id)a1;
- (BOOL)bd_dismissModalViewControllerAnimated:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
