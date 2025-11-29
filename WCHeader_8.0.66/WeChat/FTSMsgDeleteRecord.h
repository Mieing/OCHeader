@class NSString;

@interface FTSMsgDeleteRecord : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int localId;
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
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_50:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_51:(void *)a0;
+ (id)swift_localId;
+ (void)__wcdb_table_constraint_52:(void *)a0;
+ (void)__wcdb_table_constraint_53:(void *)a0;


@end
