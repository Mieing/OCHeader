@class NSString, NSSet, NSDate;

@interface AWEPzJournalRow : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) int identifier;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSDate *timeOfShow;
@property (retain, nonatomic) NSDate *timeOfHide;
@property (nonatomic) BOOL consume;
@property (copy, nonatomic) NSSet *sTags;
@property (copy, nonatomic) NSSet *cTags;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)secUid;
+ (const void *)timeOfShow;
+ (const void *)timeOfHide;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (void)__wcdb_index_27:(void *)a0;
+ (void)__wcdb_column_constraint_21:(void *)a0;
+ (const void *)ss_secUid;
+ (id)swift_ss_secUid;
+ (void)__wcdb_column_constraint_23:(void *)a0;
+ (void)__wcdb_column_constraint_25:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (const void *)ss_componentID;
+ (id)swift_ss_componentID;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (const void *)ss_identifier;
+ (const void *)ss_componentType;
+ (const void *)ss_timeOfShow;
+ (const void *)ss_timeOfHide;
+ (const void *)ss_consume;
+ (id)swift_ss_identifier;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (id)swift_ss_componentType;
+ (id)swift_ss_timeOfShow;
+ (id)swift_ss_timeOfHide;
+ (id)swift_ss_consume;
+ (const void *)allProperties;
+ (const void *)componentType;
+ (const void *)identifier;
+ (const void *)consume;
+ (const void *)componentID;

- (id)initWithID:(id)a0 type:(id)a1 secUid:(id)a2;
- (void).cxx_destruct;

@end
