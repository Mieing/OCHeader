@class NSString, MPPageDataCacheItemTemplateVersionInfoList, NSArray;

@interface MPPageDataCacheItem : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *forceUrl;
@property (nonatomic) BOOL nativePageNeedFullScreenForceUrl;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) BOOL hasItemShowType;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) MPPageDataCacheItemTemplateVersionInfoList *templateVersionInfoList;
@property (copy, nonatomic) NSString *pageKeyUrl;
@property (copy, nonatomic) NSArray *itemPictureUrls;
@property (copy, nonatomic) NSString *sourceUserName;
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
+ (const void *)url;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_url;
+ (const void *)forceUrl;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_forceUrl;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_expireTime;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_lastModifyTime;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)hasItemShowType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_hasItemShowType;
+ (const void *)itemShowType;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_itemShowType;
+ (const void *)nativePageNeedFullScreenForceUrl;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_nativePageNeedFullScreenForceUrl;
+ (const void *)templateVersionInfoList;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_templateVersionInfoList;
+ (const void *)pageKeyUrl;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_pageKeyUrl;
+ (const void *)itemPictureUrls;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_itemPictureUrls;
+ (const void *)sourceUserName;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_sourceUserName;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;

- (id)identity;
- (void)setIdentity:(id)a0;
- (BOOL)isDataValidWithTemplateType:(unsigned int)a0 templateVersion:(unsigned int)a1 templateVersionGroup:(id)a2;
- (id)copy;
- (void).cxx_destruct;

@end
