@class NSString;

@interface WCFinderLocalBackupFeedInfo : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long localId;
@property (copy, nonatomic) NSString *tid;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long expiredTime;
@property (nonatomic) unsigned long long feedSource;
@property (nonatomic) unsigned long long funcFlag;
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
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localId;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_tid;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_commentScene;
+ (const void *)feedSource;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_feedSource;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_expiredTime;
+ (const void *)funcFlag;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_funcFlag;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;

- (void).cxx_destruct;

@end
