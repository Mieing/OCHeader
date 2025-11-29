@class NSString, WCFinderLiveInfo;

@interface MMFinderLiveSnsAdStreamInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *liveId;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *exportId;
@property (copy, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long cacheTimestamp;
@property (retain, nonatomic) WCFinderLiveInfo *liveInfo;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) BOOL previewCtrlInfoEnable;
@property (nonatomic) unsigned int previewCtrlInfoEffectSeconds;
@property (nonatomic) unsigned int refreshIntervalInSecond;
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
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_liveId;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_finderUsername;
+ (const void *)exportId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_exportId;
+ (const void *)nonceId;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_nonceId;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_cacheTimestamp;
+ (const void *)liveInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_liveInfo;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_tid;
+ (const void *)sessionBuffer;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_sessionBuffer;
+ (const void *)previewCtrlInfoEnable;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_previewCtrlInfoEnable;
+ (const void *)previewCtrlInfoEffectSeconds;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_previewCtrlInfoEffectSeconds;
+ (const void *)refreshIntervalInSecond;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_refreshIntervalInSecond;
+ (void)__wcdb_table_constraint_11:(void *)a0;
+ (void)__wcdb_table_constraint_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;
+ (void)__wcdb_index_14:(void *)a0;

- (id)toDataItem;
- (void).cxx_destruct;

@end
