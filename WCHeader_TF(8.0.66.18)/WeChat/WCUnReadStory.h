@class NSString;

@interface WCUnReadStory : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *maxTid;
@property (retain, nonatomic) NSString *readTid;
@property (nonatomic) unsigned int postTime;
@property (nonatomic) unsigned int readTimestamp;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_username;
+ (const void *)maxTid;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_maxTid;
+ (const void *)readTid;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_readTid;
+ (const void *)postTime;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_postTime;
+ (const void *)readTimestamp;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_readTimestamp;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (void)__wcdb_index_16:(void *)a0;

- (void).cxx_destruct;

@end
