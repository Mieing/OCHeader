@class NSString, NSArray, IESGurdUpdateStatisticModel, IESGurdResourceURLInfo, NSDictionary;

@interface IESGurdResourceModel : NSObject

@property (copy, nonatomic) NSString *logId;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property BOOL isUpdating;
@property (nonatomic) long long packageType;
@property (retain, nonatomic) IESGurdResourceURLInfo *package;
@property (retain, nonatomic) IESGurdResourceURLInfo *patch;
@property (copy, nonatomic) NSArray *groups;
@property (nonatomic) long long downloadPriority;
@property (copy, nonatomic) NSString *hashVersion;
@property (nonatomic) BOOL isZstd;
@property (nonatomic) BOOL onDemand;
@property (nonatomic) BOOL alwaysOnDemand;
@property (nonatomic) BOOL useOdr;
@property (nonatomic) BOOL useOdrNew;
@property (nonatomic) BOOL odrMultiChannel;
@property (copy, nonatomic) NSString *odrTag;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long downloadDelay;
@property (nonatomic) unsigned long long localVersion;
@property (nonatomic) BOOL retryDownload;
@property (retain, nonatomic) IESGurdUpdateStatisticModel *updateStatisticModel;
@property (copy, nonatomic) NSArray *offlineCdnUrlList;
@property (nonatomic) BOOL fromPatch;
@property (retain) NSDictionary *logInfo;
@property (copy, nonatomic) NSArray *offlinePrefixURLsArray;
@property (nonatomic) BOOL ignoreStorage;
@property (nonatomic) BOOL ignoreBlockList;
@property (nonatomic) BOOL usingScan;
@property (nonatomic) long long blockUpdateType;
@property (nonatomic) long long metaReqType;
@property (nonatomic) BOOL needAppLog;

+ (id)instanceWithDict:(id)a0 local:(id)a1 logId:(id)a2;

- (void)putDataToDict:(id)a0;
- (BOOL)canDownloadPatchPackage;
- (BOOL)isLocked;
- (void).cxx_destruct;
- (id)description;

@end
