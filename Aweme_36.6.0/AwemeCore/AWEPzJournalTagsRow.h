@class NSString;

@interface AWEPzJournalTagsRow : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) int identifier;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (const void *)ss_identifier;
+ (id)swift_ss_identifier;
+ (const void *)ss_tag;
+ (id)swift_ss_tag;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (const void *)tag;
+ (const void *)allProperties;
+ (const void *)identifier;

- (id)initWithIdentifier:(int)a0 tag:(id)a1;
- (void).cxx_destruct;

@end
