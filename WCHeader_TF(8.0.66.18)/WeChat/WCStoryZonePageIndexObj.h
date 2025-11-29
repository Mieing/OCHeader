@class NSString;

@interface WCStoryZonePageIndexObj : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) int localTimeZone;
@property (nonatomic) unsigned long long count;
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
+ (const void *)date;
+ (const void *)__wcdb_synthesize_22:(void *)a0;
+ (id)swift_date;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_23:(void *)a0;
+ (id)swift_tid;
+ (const void *)localTimeZone;
+ (const void *)__wcdb_synthesize_24:(void *)a0;
+ (id)swift_localTimeZone;
+ (const void *)count;
+ (const void *)__wcdb_synthesize_25:(void *)a0;
+ (id)swift_count;
+ (void)__wcdb_column_constraint_26:(void *)a0;
+ (void)__wcdb_index_27:(void *)a0;

- (void).cxx_destruct;

@end
