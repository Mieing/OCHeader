@class NSString;

@interface MMFinderLiveStickerRecord : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) unsigned long long schemaVersion;
@property (retain, nonatomic) NSString *attributesJson;
@property (retain, nonatomic) NSString *imageFilename;
@property (nonatomic) double lastUpdated;
@property (nonatomic) unsigned long long liveId;
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
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_instanceId;
+ (const void *)stickerType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_stickerType;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_schemaVersion;
+ (const void *)attributesJson;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_attributesJson;
+ (const void *)imageFilename;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_imageFilename;
+ (const void *)lastUpdated;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_lastUpdated;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_liveId;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (id)stickerRecordFromItem:(id)a0 liveId:(unsigned long long)a1;
+ (id)stickerItemFromRecord:(id)a0;

- (void).cxx_destruct;

@end
