@class NSString;

@interface GroupNoticeDBTable : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *sourceId;
@property (nonatomic) unsigned int msgLocalId;
@property (retain, nonatomic) NSString *userName;
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
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sourceId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_userName;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
