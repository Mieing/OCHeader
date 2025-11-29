@class NSString;

@interface MMFinderLiveWatchStatusModel : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long readAdTimestamp;
@property (copy, nonatomic) NSString *adId;
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
+ (const void *)readAdTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_readAdTimestamp;
+ (const void *)adId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_adId;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (void)__wcdb_column_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end
