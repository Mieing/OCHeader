@class NSString;

@interface FTS5MigrateRecord : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int curMigratingTableId;
@property (nonatomic) long long lastMigratedRowid;
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
+ (const void *)curMigratingTableId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_curMigratingTableId;
+ (const void *)lastMigratedRowid;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastMigratedRowid;


@end
