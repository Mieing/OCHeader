@class NSString, MMResDownloadUrlInfo;

@interface MMResDownloadInfo : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int resType;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned int eid;
@property (retain, nonatomic) MMResDownloadUrlInfo *resUrlInfo;
@property (nonatomic) unsigned int networkType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *baseDir;
@property (nonatomic) unsigned int retryTime;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSString *sampleId;
@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)resType;
+ (const void *)__wcdb_synthesize_31:(void *)a0;
+ (id)swift_resType;
+ (const void *)networkType;
+ (const void *)__wcdb_synthesize_32:(void *)a0;
+ (id)swift_networkType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_33:(void *)a0;
+ (id)swift_scene;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_34:(void *)a0;
+ (id)swift_expiredTime;
+ (const void *)subType;
+ (const void *)__wcdb_synthesize_35:(void *)a0;
+ (id)swift_subType;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_36:(void *)a0;
+ (id)swift_appId;
+ (const void *)domain;
+ (const void *)__wcdb_synthesize_37:(void *)a0;
+ (id)swift_domain;
+ (const void *)baseDir;
+ (const void *)__wcdb_synthesize_38:(void *)a0;
+ (id)swift_baseDir;
+ (const void *)retryTime;
+ (const void *)__wcdb_synthesize_39:(void *)a0;
+ (id)swift_retryTime;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_40:(void *)a0;
+ (id)swift_reportId;
+ (const void *)sampleId;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (id)swift_sampleId;
+ (const void *)packageId;
+ (const void *)__wcdb_synthesize_42:(void *)a0;
+ (id)swift_packageId;
+ (const void *)resUrlInfo;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_resUrlInfo;
+ (const void *)eid;
+ (const void *)__wcdb_synthesize_44:(void *)a0;
+ (id)swift_eid;

- (id)resourceDirectory;
- (id)resourceFilePath;
- (void).cxx_destruct;

@end
