@class NSString, NSDate;

@interface AWEPzComponentRow : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSDate *timeOfFirstShow;
@property (retain, nonatomic) NSDate *timeOfLastShow;
@property (nonatomic) int showCount;
@property (nonatomic) int consumeCount;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)secUid;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)ss_secUid;
+ (id)swift_ss_secUid;
+ (void)__wcdb_column_constraint_23:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (const void *)consumeCount;
+ (const void *)timeOfFirstShow;
+ (const void *)timeOfLastShow;
+ (const void *)ss_componentID;
+ (const void *)ss_timeOfFirstShow;
+ (const void *)ss_timeOfLastShow;
+ (const void *)ss_showCount;
+ (const void *)ss_consumeCount;
+ (id)swift_ss_componentID;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (id)swift_ss_timeOfFirstShow;
+ (id)swift_ss_timeOfLastShow;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_ss_showCount;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_ss_consumeCount;
+ (void)__wcdb_table_constraint_19:(void *)a0;
+ (void)__wcdb_table_constraint_21:(void *)a0;
+ (const void *)allProperties;
+ (const void *)componentID;
+ (const void *)showCount;

- (id)initWithID:(id)a0 secUid:(id)a1;
- (void).cxx_destruct;

@end
