@class EncryptionInfo, NSString, UDRResourceDiff, UDRExtInfo;

@interface UDROneResourceDescription : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) unsigned int resourceSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) UDRExtInfo *extInfo;
@property (retain, nonatomic) UDRResourceDiff *diffInfo;
@property (nonatomic) int resourceRet;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int resourceExpireTimeMs;
@property (nonatomic) unsigned int resourceStoreType;
@property (retain, nonatomic) EncryptionInfo *resourceEncryptionInfo;

+ (void)initialize;

- (void)setResourceEncryptionInfo:(id)a0;
- (id)resourceEncryptionInfo;
- (void)setResourceStoreType:(unsigned int)a0;
- (unsigned int)resourceStoreType;
- (void)setResourceExpireTimeMs:(unsigned int)a0;
- (unsigned int)resourceExpireTimeMs;
- (void)setResourceType:(unsigned int)a0;
- (unsigned int)resourceType;
- (void)setResourceRet:(int)a0;
- (int)resourceRet;
- (void)setDiffInfo:(id)a0;
- (id)diffInfo;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setUrl:(id)a0;
- (id)url;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setResourceSize:(unsigned int)a0;
- (unsigned int)resourceSize;
- (void)setResourceVersion:(unsigned int)a0;
- (unsigned int)resourceVersion;
- (void)setResourceName:(id)a0;
- (id)resourceName;
- (void)setProjectId:(id)a0;
- (id)projectId;

@end
